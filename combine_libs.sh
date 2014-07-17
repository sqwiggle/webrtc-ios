_dfiles="trunk/out_ios/Release-iphoneos/*.a"

for f in $_dfiles
do
	IFS='/' read -a array <<< "$f"
	pwd
	lipo -create $"trunk/out_ios/Release-iphoneos/${array[3]}" "trunk/out_sim/Release-iphonesimulator/${array[3]}" -output "built_libs/${array[3]}"
	
done