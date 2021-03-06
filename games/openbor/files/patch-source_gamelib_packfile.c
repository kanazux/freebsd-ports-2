Reset seek position for BGM with more than 128 tracks
Don't crash with more than 256 tracks.

--- source/gamelib/packfile.c.orig	2018-07-06 15:13:16 UTC
+++ source/gamelib/packfile.c
@@ -1407,7 +1407,7 @@ void packfile_music_read(fileliststruct *filelist, int
         getBasePath(packfile, filelist[i].filename, 1);
         if(stristr(packfile, ".pak"))
         {
-            memset(filelist[i].bgmTracks, 0, PACKFILE_PATH_MAX);
+            memset(filelist[i].bgmTracks, 0, sizeof(filelist[i].bgmTracks));
             filelist[i].nTracks = 0;
             fd = fopen(packfile, "rb");
             if(fd == NULL)
@@ -1439,7 +1439,7 @@ void packfile_music_read(fileliststruct *filelist, int
                     {
                         goto nextpak;
                     }
-                    if(filelist[i].nTracks < PACKFILE_PATH_MAX)
+                    if(filelist[i].nTracks < 256)
                     {
                         packfile_get_titlename(pn.namebuf, filelist[i].bgmFileName[filelist[i].nTracks]);
                         filelist[i].bgmTracks[filelist[i].nTracks] = off;
