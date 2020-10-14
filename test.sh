#Building
mkdir build
cd build
cmake ..
make

cd ..

#Old transformation
build/Kalray imgs/curious_cat.png imgs_transformed/curious_cat.png
build/Kalray imgs/manycore-img.png imgs_transformed/manycore-img.png
build/Kalray imgs/kalray.png imgs_transformed/kalray.png

#New transformation with R=1.2, G=0.8, B=0.8

build/Kalray imgs/curious_cat.png imgs_transformed/curious_cat_Rx1.2_Gx0.8_Bx0.8.png 1.2 0.8 0.8
build/Kalray imgs/manycore-img.png imgs_transformed/manycore-img_Rx1.2_Gx0.8_Bx0.8.png 1.2 0.8 0.8
build/Kalray imgs/kalray.png imgs_transformed/kalray_Rx1.2_Gx0.8_Bx0.8.png 1.2 0.8 0.8

compare -metric rmse imgs_transformed/kalray.png goldens/kalray.png /dev/null
compare -metric rmse imgs_transformed/manycore-img.png goldens/manycore-img.png /dev/null
