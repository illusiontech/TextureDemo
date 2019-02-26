#include <com.gdg.utils.Wrapper.h>
#include <com.badlogic.gdx.graphics.g2d.Gdx2DPixmap.h>
#include <com.badlogic.gdx.graphics.glutils.ETC1.h>
#include <com.badlogic.gdx.utils.BufferUtils.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//BufferUtils 19
JNIEXPORT jobject JNICALL Java_com_gdg_utils_Wrapper_newDisposableByteBuffer(JNIEnv* env, jclass clazz, jint numBytes) {
    return Java_com_badlogic_gdx_utils_BufferUtils_newDisposableByteBuffer(env,clazz,numBytes);
}

//BufferUtils 8
JNIEXPORT void JNICALL Java_com_gdg_utils_Wrapper_freeMemory (JNIEnv* env, jclass clazz, jobject obj_buffer){
    return Java_com_badlogic_gdx_utils_BufferUtils_freeMemory(env,clazz,obj_buffer);
}

//ETC1 37
JNIEXPORT jint JNICALL Java_com_gdg_utils_Wrapper_getWidthPKM(JNIEnv* env, jclass clazz, jobject obj_header, jint offset) {
    return Java_com_badlogic_gdx_graphics_glutils_ETC1_getWidthPKM(env,clazz,obj_header,offset);
}

//ETC1 55
JNIEXPORT jint JNICALL Java_com_gdg_utils_Wrapper_getHeightPKM(JNIEnv* env, jclass clazz, jobject obj_header, jint offset) {
    return Java_com_badlogic_gdx_graphics_glutils_ETC1_getHeightPKM(env,clazz,obj_header,offset);
}

//ETC1 82
JNIEXPORT void JNICALL Java_com_gdg_utils_Wrapper_decodeImage(JNIEnv* env, jclass clazz, jobject obj_compressedData, jint offset, jobject obj_decodedData, jint offsetDec, jint width, jint height, jint pixelSize) {
    return Java_com_badlogic_gdx_graphics_glutils_ETC1_decodeImage(env,clazz,obj_compressedData,offset,obj_decodedData,offsetDec,width,height,pixelSize);
}

//Gdx2DPixmap.cpp 30
JNIEXPORT jobject JNICALL Java_com_gdg_utils_Wrapper_newPixmap(JNIEnv* env, jclass clazz, jlongArray nativeData, jint width, jint height, jint format) {
    return Java_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_newPixmap(env,clazz,nativeData,width,height,format);
}

//Gdx2DPixmap.cpp 60
JNIEXPORT void JNICALL Java_com_gdg_utils_Wrapper_clear(JNIEnv* env, jclass clazz, jlong pixmap, jint color) {
    return Java_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear(env,clazz,pixmap,color);
}

//Gdx2DPixmap.cpp 160
JNIEXPORT void JNICALL Java_com_gdg_utils_Wrapper_setBlend(JNIEnv* env, jclass clazz, jint blend) {
    return Java_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend(env,clazz,blend);
}

//Gdx2DPixmap.cpp 163
JNIEXPORT void JNICALL Java_com_gdg_utils_Wrapper_setScale(JNIEnv * env, jclass clazz, jint scale){
    return Java_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale(env,clazz,scale);
}

//Gdx2DPixmap.cpp 150
JNIEXPORT void JNICALL Java_com_gdg_utils_Wrapper_drawPixmap(JNIEnv* env, jclass clazz, jlong src, jlong dst, jint srcX, jint srcY, jint srcWidth, jint srcHeight, jint dstX, jint dstY, jint dstWidth, jint dstHeight) {
    return Java_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap(env,clazz,src,dst,srcX,srcY,srcWidth,srcHeight,dstX,dstY,dstWidth,dstHeight);
}

//Gdx2DPixmap.cpp 50
JNIEXPORT void JNICALL Java_com_gdg_utils_Wrapper_free(JNIEnv* env, jclass clazz, jlong pixmap) {
    return Java_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_free(env,clazz,pixmap);
}

//Gdx2DPixmap.cpp 7
JNIEXPORT jobject JNICALL Java_com_gdg_utils_Wrapper_load(JNIEnv* env, jclass clazz, jlongArray nativeData, jbyteArray buffer, jint offset, jint len) {
    return Java_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_load(env,clazz,nativeData,buffer,offset,len);
}