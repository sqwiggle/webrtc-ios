_dfiles="trunk/out_ios/Release-iphoneos/*.a"

mkdir $"built_libs/"
mkdir $"built_libs/device/"
mkdir $"built_libs/simulator/"

for f in $_dfiles
do
	IFS='/' read -a array <<< "$f"
	pwd
	# (lipo -create $"trunk/out_ios/Release-iphoneos/${array[3]}" $"trunk/out_sim/Release-iphonesimulator/${array[3]}" -output $"built_libs/universal_${array[3]}")
	
	cp $"trunk/out_ios/Release-iphoneos/${array[3]}" $"built_libs/device/device_${array[3]}"
	cp $"trunk/out_ios/Release-iphonesimulator/${array[3]}" $"built_libs/simulator/simulator_${array[3]}"
	
done

#Now go get headers

