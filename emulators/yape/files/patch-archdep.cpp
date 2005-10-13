
$FreeBSD$

--- archdep.cpp.orig
+++ archdep.cpp
@@ -49,7 +49,7 @@
 int ad_makedirs(char *path)
 {
   strcpy(temp,path);
-  strcat(temp, "/yape");
+  strcat(temp, "/.yape");
   CreateDirectory(temp, NULL);
 
   return 1;
@@ -108,7 +108,7 @@
 
   strcpy( homedir , getenv( "HOME" ));
   //strcpy( filter, filefilter);
-  strcat( homedir, "/yape" );
+  strcat( homedir, "/.yape" );
   chdir ( homedir );
   dirp = opendir( homedir );
   //fprintf( stderr, "reading from %s\n", homedir);
@@ -136,7 +136,7 @@
 int ad_makedirs(char *path)
 {
   strcpy(temp,path);
-  strcat(temp, "/yape");
+  strcat(temp, "/.yape");
   mkdir(temp, 0777);
 
   return 1;
@@ -146,7 +146,7 @@
 {
 
 	strcpy( temp, tmpchr);
-	strcat( temp, "/yape/yape.conf");
+	strcat( temp, "/.yape/yape.conf");
 
 	return temp;
 }
