/*
		 * To change this license header, choose License Headers in Project Properties.
		 * To change this template file, choose Tools | Templates
		 * and open the template in the editor.
		 */

		/* 
		 * File:   main.c
		 * Author: bake
		 *
		 * Created on April 04, 2018, 12:11 PM
		 */
		
			#include <simple.h> 
int main( int argc, char *argv[]) {	
		
			static const unsigned char sim_code[] = { 0x2f,0x2a,0x20,0xa ,0x9 ,0x43,0x6f,0x70,0x79,0x72,0x69,0x67,0x68,0x74,0x20,0x28,0x63,0x29,0x20,0x32,0x30,0x31,0x38,0x20,0x41,0x7a,0x65,0x65,0x7a,0x20,0x41,0x64,0x65,0x77,0x61,0x6c,0x65,0x20,0x3c,0x61,0x7a,0x65,0x65,0x7a,0x61,0x64,0x65,0x77,0x61,0x6c,0x65,0x39,0x38,0x40,0x67,0x6d,0x61,0x69,0x6c,0x2e,0x63,0x6f,0x6d,0x22,0x3e,0x20,0xa ,0x9 ,0x4d,0x49,0x54,0x20,0x4c,0x69,0x63,0x65,0x6e,0x73,0x65,0x20,0x43,0x6f,0x70,0x79,0x72,0x69,0x67,0x68,0x74,0x20,0x28,0x63,0x29,0x20,0x32,0x30,0x31,0x38,0x20,0x53,0x49,0x4d,0x50,0x4c,0x45,0xa ,0xa ,0x2a,0x2f,0xa ,0xa ,0x2f,0x2a,0x20,0xa ,0x20,0x2a,0x20,0x40,0x46,0x69,0x6c,0x65,0x6e,0x61,0x6d,0x65,0x20,0x2d,0x20,0x53,0x69,0x6d,0x70,0x6c,0x65,0x50,0x61,0x64,0x2e,0x73,0x69,0x6d,0xa ,0x20,0x2a,0x20,0x40,0x41,0x75,0x74,0x68,0x6f,0x72,0x20,0x2d,0x20,0x41,0x7a,0x65,0x65,0x7a,0x20,0x41,0x64,0x65,0x77,0x61,0x6c,0x65,0xa ,0x20,0x2a,0x20,0x40,0x44,0x61,0x74,0x65,0x20,0x2d,0x20,0x32,0x37,0x20,0x46,0x65,0x62,0x75,0x61,0x72,0x79,0x20,0x32,0x30,0x31,0x38,0xa ,0x20,0x2a,0x20,0x40,0x54,0x69,0x6d,0x65,0x20,0x2d,0x20,0x30,0x34,0x3a,0x30,0x39,0x20,0x41,0x4d,0xa ,0x20,0x2a,0x2f,0xa ,0x20,0x2f,0x2a,0xa ,0x9 ,0x9 ,0x53,0x49,0x4d,0x50,0x4c,0x45,0x50,0x41,0x44,0xa ,0x9 ,0x9 ,0x54,0x68,0x69,0x73,0x20,0x61,0x70,0x70,0x6c,0x69,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x69,0x73,0x20,0x61,0x20,0x73,0x6d,0x61,0x6c,0x6c,0x20,0x6d,0x69,0x63,0x72,0x6f,0x20,0x74,0x65,0x78,0x74,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x20,0x69,0x6e,0x74,0x65,0x6e,0x64,0x65,0x64,0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x70,0x61,0x63,0x6b,0x65,0x64,0xa ,0x9 ,0x9 ,0x61,0x73,0x20,0x61,0x6e,0x20,0x65,0x6e,0x76,0x69,0x72,0x6f,0x6e,0x6d,0x65,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x65,0x20,0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x64,0x69,0x73,0x74,0x72,0x69,0x62,0x75,0x74,0x69,0x6f,0x6e,0x2e,0x20,0x49,0x74,0x20,0x64,0x6f,0x65,0x73,0x20,0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0xa ,0x9 ,0x9 ,0x61,0x73,0x20,0xa ,0x9 ,0x9 ,0x43,0x72,0x65,0x61,0x74,0x65,0x20,0x4e,0x65,0x77,0x20,0x46,0x69,0x6c,0x65,0xa ,0x9 ,0x9 ,0x53,0x61,0x76,0x65,0x20,0x46,0x69,0x6c,0x65,0xa ,0x9 ,0x9 ,0x4f,0x70,0x65,0x6e,0x20,0x46,0x69,0x6c,0x65,0xa ,0x9 ,0x9 ,0x52,0x75,0x6e,0x20,0x46,0x69,0x6c,0x65,0xa ,0x9 ,0x9 ,0x69,0x74,0x20,0x61,0x6c,0x73,0x6f,0x20,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x20,0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x68,0x69,0x67,0x68,0x6c,0x69,0x67,0x68,0x74,0x69,0x6e,0x67,0x20,0x61,0x6e,0x64,0x20,0x6f,0x74,0x68,0x65,0x72,0x20,0x62,0x61,0x73,0x69,0x63,0x20,0x61,0x6e,0x64,0x20,0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0xa ,0x20,0x2a,0x2f,0xa ,0xa ,0x63,0x61,0x6c,0x6c,0x20,0x22,0x66,0x75,0x6c,0x6c,0x74,0x69,0x63,0x6b,0x2f,0x61,0x6c,0x6c,0x2e,0x73,0x69,0x6d,0x22,0xa ,0x63,0x61,0x6c,0x6c,0x20,0x22,0x73,0x69,0x6d,0x70,0x6c,0x65,0x2f,0x73,0x79,0x73,0x74,0x65,0x6d,0x2f,0x52,0x75,0x6e,0x74,0x69,0x6d,0x65,0x2e,0x73,0x69,0x6d,0x22,0xa ,0x63,0x61,0x6c,0x6c,0x20,0x22,0x73,0x69,0x6d,0x70,0x6c,0x65,0x2f,0x69,0x6f,0x2f,0x46,0x69,0x6c,0x65,0x2e,0x73,0x69,0x6d,0x22,0xa ,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x20,0x20,0xa ,0x9 ,0x73,0x70,0x20,0x3d,0x20,0x6e,0x65,0x77,0x20,0x53,0x69,0x6d,0x70,0x6c,0x65,0x50,0x61,0x64,0x20,0x73,0x70,0x2e,0x72,0x65,0x6e,0x64,0x65,0x72,0x28,0x29,0xa ,0x9 ,0xa ,0x9 ,0xa ,0x63,0x6c,0x61,0x73,0x73,0x20,0x53,0x69,0x6d,0x70,0x6c,0x65,0x50,0x61,0x64,0x20,0x3a,0x20,0x46,0x57,0x69,0x6e,0x64,0x6f,0x77,0xa ,0xa ,0x9 ,0x66,0x69,0x6c,0x65,0x20,0x3d,0x20,0x6e,0x75,0x6c,0x6c,0x20,0xa ,0x9 ,0x62,0x61,0x63,0x6b,0x47,0x72,0x6f,0x75,0x6e,0x64,0x20,0x3d,0x20,0x46,0x43,0x6f,0x6c,0x6f,0x72,0x2e,0x57,0x48,0x49,0x54,0x45,0x28,0x29,0x20,0x23,0x46,0x43,0x6f,0x6c,0x6f,0x72,0x2e,0x66,0x72,0x6f,0x6d,0x52,0x47,0x42,0x28,0x38,0x2c,0x31,0x32,0x2c,0x31,0x30,0x29,0xa ,0x9 ,0x74,0x65,0x78,0x74,0x43,0x6f,0x6c,0x6f,0x72,0x20,0x3d,0x20,0x46,0x43,0x6f,0x6c,0x6f,0x72,0x2e,0x42,0x4c,0x41,0x43,0x4b,0x28,0x29,0x20,0x23,0x46,0x43,0x6f,0x6c,0x6f,0x72,0x2e,0x66,0x72,0x6f,0x6d,0x52,0x47,0x42,0x28,0x37,0x38,0x2c,0x38,0x32,0x2c,0x38,0x30,0x29,0xa ,0x9 ,0x6c,0x69,0x6e,0x65,0x4e,0x75,0x6d,0x62,0x65,0x72,0x57,0x69,0x64,0x74,0x68,0x20,0x3d,0x20,0x33,0x30,0xa ,0x9 ,0xa ,0x9 ,0x6d,0x65,0x6e,0x75,0x20,0x3d,0x20,0x5b,0xa ,0x9 ,0x9 ,0x5b,0x22,0x46,0x69,0x6c,0x65,0x22,0x2c,0x20,0x22,0x22,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x5b,0x22,0x4e,0x65,0x77,0x22,0x2c,0x20,0x22,0x6e,0x65,0x77,0x46,0x69,0x6c,0x65,0x28,0x29,0x22,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x4f,0x70,0x65,0x6e,0x22,0x2c,0x20,0x22,0x6f,0x70,0x65,0x6e,0x28,0x29,0x22,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x53,0x61,0x76,0x65,0x22,0x2c,0x20,0x22,0x73,0x61,0x76,0x65,0x28,0x29,0x22,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x53,0x61,0x76,0x65,0x20,0x41,0x73,0x2e,0x2e,0x22,0x2c,0x20,0x22,0x73,0x61,0x76,0x65,0x41,0x73,0x28,0x29,0x22,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x43,0x6c,0x6f,0x73,0x65,0x22,0x2c,0x20,0x22,0x63,0x6c,0x6f,0x73,0x65,0x28,0x29,0x22,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x45,0x78,0x69,0x74,0x22,0x2c,0x20,0x22,0x65,0x78,0x69,0x74,0x28,0x29,0x22,0x5d,0x5d,0x9 ,0x9 ,0x9 ,0xa ,0x9 ,0x9 ,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x5b,0x22,0x45,0x64,0x69,0x74,0x22,0x2c,0x20,0x22,0x22,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x5b,0x22,0x55,0x6e,0x64,0x6f,0x22,0x2c,0x20,0x22,0x75,0x6e,0x64,0x6f,0x28,0x29,0x22,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x43,0x6f,0x70,0x79,0x22,0x2c,0x20,0x22,0x63,0x6f,0x70,0x79,0x28,0x29,0x22,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x43,0x75,0x74,0x22,0x2c,0x20,0x22,0x63,0x75,0x74,0x28,0x29,0x22,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x44,0x65,0x6c,0x65,0x74,0x65,0x22,0x2c,0x20,0x22,0x64,0x65,0x6c,0x65,0x74,0x65,0x28,0x29,0x22,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x52,0x65,0x61,0x64,0x20,0x4f,0x6e,0x6c,0x79,0x22,0x2c,0x20,0x22,0x65,0x64,0x69,0x74,0x61,0x62,0x6c,0x65,0x28,0x29,0x22,0x2c,0x32,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x57,0x6f,0x72,0x64,0x20,0x57,0x72,0x61,0x70,0x22,0x2c,0x20,0x22,0x77,0x6f,0x72,0x64,0x57,0x72,0x61,0x70,0x28,0x29,0x22,0x2c,0x32,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x4c,0x69,0x6e,0x65,0x20,0x4e,0x75,0x6d,0x62,0x65,0x72,0x22,0x2c,0x20,0x22,0x6c,0x69,0x6e,0x65,0x4e,0x75,0x6d,0x62,0x65,0x72,0x28,0x29,0x22,0x2c,0x32,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x53,0x68,0x6f,0x77,0x20,0x4f,0x75,0x74,0x70,0x75,0x74,0x22,0x2c,0x20,0x22,0x6e,0x6f,0x4f,0x75,0x74,0x70,0x75,0x74,0x28,0x29,0x22,0x2c,0x32,0x5d,0x5d,0x9 ,0x9 ,0xa ,0x9 ,0x9 ,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x5b,0x22,0x53,0x65,0x61,0x72,0x63,0x68,0x22,0x2c,0x20,0x22,0x22,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x5b,0x22,0x46,0x69,0x6e,0x64,0x22,0x2c,0x20,0x22,0x66,0x69,0x6e,0x64,0x28,0x29,0x22,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x52,0x65,0x70,0x6c,0x61,0x63,0x65,0x22,0x2c,0x20,0x22,0x72,0x65,0x70,0x6c,0x61,0x63,0x65,0x28,0x29,0x22,0x5d,0x5d,0x9 ,0x9 ,0xa ,0x9 ,0x9 ,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x5b,0x22,0x50,0x72,0x6f,0x67,0x72,0x61,0x6d,0x22,0x2c,0x20,0x22,0x22,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x5b,0x22,0x52,0x75,0x6e,0x22,0x2c,0x20,0x22,0x72,0x75,0x6e,0x53,0x6f,0x75,0x72,0x63,0x65,0x28,0x29,0x22,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x5f,0x44,0x65,0x62,0x75,0x67,0x22,0x2c,0x20,0x22,0x64,0x65,0x62,0x75,0x67,0x53,0x6f,0x75,0x72,0x63,0x65,0x28,0x29,0x22,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x9 ,0x5b,0x22,0x42,0x75,0x69,0x6c,0x64,0x20,0x45,0x78,0x65,0x63,0x75,0x74,0x61,0x62,0x6c,0x65,0x22,0x2c,0x20,0x22,0x62,0x75,0x69,0x6c,0x64,0x28,0x29,0x22,0x5d,0x5d,0x9 ,0x9 ,0xa ,0x9 ,0x9 ,0x5d,0x2c,0xa ,0x9 ,0x9 ,0x5b,0x22,0x41,0x62,0x6f,0x75,0x74,0x22,0x2c,0x20,0x22,0x61,0x62,0x6f,0x75,0x74,0x28,0x29,0x22,0x5d,0xa ,0x9 ,0x5d,0xa ,0x9 ,0x23,0x77,0x69,0x64,0x67,0x65,0x74,0x73,0x20,0x68,0x65,0x72,0x65,0xa ,0x9 ,0x6d,0x65,0x6e,0x75,0x42,0x61,0x72,0x20,0x3d,0x20,0x6e,0x65,0x77,0x20,0x46,0x4d,0x65,0x6e,0x75,0x42,0x61,0x72,0x28,0x29,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x20,0x3d,0x20,0x6e,0x65,0x77,0x20,0x46,0x54,0x65,0x78,0x74,0x45,0x64,0x69,0x74,0x6f,0x72,0x28,0x29,0x20,0xa ,0xa ,0x9 ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x72,0x65,0x6e,0x64,0x65,0x72,0x28,0x29,0x20,0xa ,0x9 ,0x9 ,0x73,0x65,0x74,0x54,0x69,0x74,0x6c,0x65,0x28,0x22,0x53,0x49,0x4d,0x50,0x4c,0x45,0x50,0x41,0x44,0x22,0x29,0x20,0x73,0x65,0x74,0x53,0x69,0x7a,0x65,0x28,0x34,0x30,0x30,0x2c,0x20,0x34,0x38,0x30,0x29,0x20,0xa ,0x9 ,0x9 ,0x73,0x65,0x74,0x42,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x28,0x62,0x61,0x63,0x6b,0x47,0x72,0x6f,0x75,0x6e,0x64,0x29,0x2e,0x73,0x65,0x74,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x28,0x33,0x30,0x2c,0x33,0x30,0x29,0x20,0x61,0x64,0x64,0x43,0x6f,0x6d,0x70,0x6f,0x6e,0x65,0x6e,0x74,0x73,0x28,0x29,0x20,0x72,0x75,0x6e,0x28,0x29,0x20,0xa ,0x9 ,0x9 ,0xa ,0x9 ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x61,0x64,0x64,0x43,0x6f,0x6d,0x70,0x6f,0x6e,0x65,0x6e,0x74,0x73,0x28,0x29,0xa ,0x9 ,0x9 ,0x23,0x6d,0x65,0x6e,0x75,0xa ,0x9 ,0x9 ,0x6d,0x65,0x6e,0x75,0x42,0x61,0x72,0x2e,0x73,0x65,0x74,0x53,0x69,0x7a,0x65,0x28,0x67,0x65,0x74,0x57,0x69,0x64,0x74,0x68,0x28,0x29,0x2c,0x33,0x30,0x29,0x2e,0x73,0x65,0x74,0x42,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x28,0x62,0x61,0x63,0x6b,0x47,0x72,0x6f,0x75,0x6e,0x64,0x29,0x2e,0x61,0x64,0x64,0x4d,0x65,0x6e,0x75,0x28,0x6d,0x65,0x6e,0x75,0x29,0x2e,0x73,0x65,0x74,0x42,0x6f,0x78,0x54,0x79,0x70,0x65,0x28,0x46,0x42,0x4f,0x58,0x5f,0x46,0x4c,0x41,0x54,0x5f,0x42,0x4f,0x58,0x29,0x2e,0x73,0x65,0x74,0x54,0x65,0x78,0x74,0x43,0x6f,0x6c,0x6f,0x72,0x28,0x74,0x65,0x78,0x74,0x43,0x6f,0x6c,0x6f,0x72,0x29,0x2e,0x73,0x65,0x74,0x44,0x6f,0x77,0x6e,0x43,0x6f,0x6c,0x6f,0x72,0x28,0x46,0x42,0x4f,0x58,0x5f,0x46,0x4c,0x41,0x54,0x5f,0x42,0x4f,0x58,0x29,0xa ,0x9 ,0x9 ,0x23,0x65,0x64,0x69,0x74,0x6f,0x72,0xa ,0x9 ,0x9 ,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x73,0x65,0x74,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x28,0x31,0x30,0x2c,0x33,0x30,0x29,0x2e,0x73,0x65,0x74,0x53,0x69,0x7a,0x65,0x28,0x33,0x38,0x30,0x2c,0x34,0x33,0x30,0x29,0x2e,0x73,0x65,0x74,0x42,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x28,0x62,0x61,0x63,0x6b,0x47,0x72,0x6f,0x75,0x6e,0x64,0x29,0x2e,0x73,0x65,0x74,0x54,0x65,0x78,0x74,0x43,0x6f,0x6c,0x6f,0x72,0x28,0x74,0x65,0x78,0x74,0x43,0x6f,0x6c,0x6f,0x72,0x29,0x2e,0x73,0x65,0x74,0x43,0x75,0x72,0x73,0x6f,0x72,0x43,0x6f,0x6c,0x6f,0x72,0x28,0x74,0x65,0x78,0x74,0x43,0x6f,0x6c,0x6f,0x72,0x29,0x2e,0x68,0x69,0x64,0x65,0x53,0x63,0x72,0x6f,0x6c,0x6c,0x42,0x61,0x72,0x28,0x29,0xa ,0x9 ,0x9 ,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x73,0x65,0x74,0x42,0x6f,0x78,0x54,0x79,0x70,0x65,0x28,0x46,0x42,0x4f,0x58,0x5f,0x46,0x4c,0x41,0x54,0x5f,0x42,0x4f,0x58,0x29,0xa ,0x9 ,0x9 ,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x2f,0x2a,0x73,0x65,0x74,0x4c,0x69,0x6e,0x65,0x4e,0x75,0x6d,0x62,0x65,0x72,0x57,0x69,0x64,0x74,0x68,0x28,0x6c,0x69,0x6e,0x65,0x4e,0x75,0x6d,0x62,0x65,0x72,0x57,0x69,0x64,0x74,0x68,0x29,0x2e,0x2a,0x2f,0x73,0x65,0x74,0x4c,0x69,0x6e,0x65,0x4e,0x75,0x6d,0x62,0x65,0x72,0x42,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x28,0x62,0x61,0x63,0x6b,0x47,0x72,0x6f,0x75,0x6e,0x64,0x29,0x2e,0x73,0x65,0x74,0x4c,0x69,0x6e,0x65,0x4e,0x75,0x6d,0x62,0x65,0x72,0x54,0x65,0x78,0x74,0x43,0x6f,0x6c,0x6f,0x72,0x28,0x74,0x65,0x78,0x74,0x43,0x6f,0x6c,0x6f,0x72,0x29,0xa ,0x9 ,0x9 ,0x61,0x64,0x64,0x52,0x65,0x73,0x69,0x7a,0x61,0x62,0x6c,0x65,0x57,0x69,0x64,0x67,0x65,0x74,0x28,0x5b,0x6d,0x65,0x6e,0x75,0x42,0x61,0x72,0x2c,0x65,0x64,0x69,0x74,0x6f,0x72,0x5d,0x29,0x20,0x23,0x6e,0x6f,0x74,0x69,0x66,0x79,0x4d,0x65,0x6e,0x75,0x28,0x30,0x29,0x20,0xa ,0x9 ,0x9 ,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x65,0x78,0x65,0x46,0x6f,0x6c,0x64,0x65,0x72,0x28,0x29,0xa ,0x9 ,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x67,0x65,0x74,0x53,0x79,0x73,0x74,0x65,0x6d,0x45,0x6e,0x76,0x69,0x72,0x6f,0x6e,0x6d,0x65,0x6e,0x74,0x28,0x22,0x53,0x49,0x4d,0x50,0x4c,0x45,0x5f,0x50,0x41,0x54,0x48,0x22,0x29,0x2b,0x27,0x2f,0x27,0xa ,0x9 ,0xa ,0x23,0x46,0x49,0x4c,0x45,0x9 ,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x6e,0x65,0x77,0x46,0x69,0x6c,0x65,0x28,0x29,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x63,0x6c,0x65,0x61,0x72,0x28,0x29,0x20,0x66,0x69,0x6c,0x65,0x20,0x3d,0x20,0x6e,0x75,0x6c,0x6c,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x6f,0x70,0x65,0x6e,0x28,0x29,0x20,0x66,0x69,0x6c,0x65,0x20,0x3d,0x20,0x6e,0x65,0x77,0x20,0x46,0x69,0x6c,0x65,0x28,0x22,0x2e,0x2e,0x2f,0x73,0x6d,0x61,0x6b,0x65,0x2f,0x74,0x65,0x73,0x74,0x2e,0x73,0x69,0x6d,0x22,0x29,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x73,0x65,0x74,0x54,0x65,0x78,0x74,0x28,0x66,0x69,0x6c,0x65,0x2e,0x72,0x65,0x61,0x64,0x46,0x69,0x6c,0x65,0x41,0x73,0x53,0x74,0x72,0x69,0x6e,0x67,0x28,0x29,0x29,0x20,0x6e,0x6f,0x74,0x69,0x66,0x79,0x4d,0x65,0x6e,0x75,0x28,0x31,0x29,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x73,0x61,0x76,0x65,0x28,0x29,0x20,0x66,0x69,0x6c,0x65,0x2e,0x77,0x72,0x69,0x74,0x65,0x28,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x67,0x65,0x74,0x54,0x65,0x78,0x74,0x28,0x29,0x29,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x73,0x61,0x76,0x65,0x41,0x73,0x28,0x29,0x20,0x64,0x69,0x73,0x70,0x6c,0x61,0x79,0x20,0x22,0x4e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x79,0x65,0x74,0x2e,0x2e,0x2e,0x2e,0x20,0x22,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x63,0x6c,0x6f,0x73,0x65,0x28,0x29,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x63,0x6c,0x65,0x61,0x72,0x28,0x29,0x20,0x66,0x69,0x6c,0x65,0x20,0x3d,0x20,0x6e,0x75,0x6c,0x6c,0x20,0x6e,0x6f,0x74,0x69,0x66,0x79,0x4d,0x65,0x6e,0x75,0x28,0x30,0x29,0x20,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x65,0x78,0x69,0x74,0x28,0x29,0x20,0x5f,0x5f,0x65,0x78,0x69,0x74,0x5f,0x5f,0xa ,0x23,0x45,0x44,0x49,0x54,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x75,0x6e,0x64,0x6f,0x28,0x29,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x75,0x6e,0x64,0x6f,0x28,0x29,0x20,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x63,0x6f,0x70,0x79,0x28,0x29,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x63,0x6f,0x70,0x79,0x28,0x29,0x20,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x70,0x61,0x73,0x74,0x65,0x28,0x29,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x70,0x61,0x73,0x74,0x65,0x28,0x29,0x20,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x64,0x65,0x6c,0x65,0x74,0x65,0x28,0x29,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x64,0x65,0x6c,0x65,0x74,0x65,0x28,0x29,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x63,0x75,0x74,0x28,0x29,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x63,0x75,0x74,0x28,0x29,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x6c,0x69,0x6e,0x65,0x4e,0x75,0x6d,0x62,0x65,0x72,0x28,0x29,0x20,0x69,0x66,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x69,0x73,0x4c,0x69,0x6e,0x65,0x4e,0x75,0x6d,0x62,0x65,0x72,0x45,0x6e,0x61,0x62,0x6c,0x65,0x64,0x28,0x29,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x68,0x69,0x64,0x65,0x4c,0x69,0x6e,0x65,0x4e,0x75,0x6d,0x62,0x65,0x72,0x28,0x29,0x20,0x65,0x6c,0x73,0x65,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x73,0x65,0x74,0x4c,0x69,0x6e,0x65,0x4e,0x75,0x6d,0x62,0x65,0x72,0x57,0x69,0x64,0x74,0x68,0x28,0x6c,0x69,0x6e,0x65,0x4e,0x75,0x6d,0x62,0x65,0x72,0x57,0x69,0x64,0x74,0x68,0x29,0x20,0x20,0x65,0x6e,0x64,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x77,0x6f,0x72,0x64,0x57,0x72,0x61,0x70,0x28,0x29,0x20,0x69,0x66,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x69,0x73,0x57,0x72,0x61,0x70,0x70,0x69,0x6e,0x67,0x28,0x29,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x77,0x72,0x61,0x70,0x28,0x66,0x61,0x6c,0x73,0x65,0x29,0x20,0x65,0x6c,0x73,0x65,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x77,0x72,0x61,0x70,0x28,0x74,0x72,0x75,0x65,0x29,0x20,0x65,0x6e,0x64,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x65,0x64,0x69,0x74,0x61,0x62,0x6c,0x65,0x28,0x29,0x20,0x69,0x66,0x20,0x6e,0x6f,0x74,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x69,0x73,0x52,0x65,0x61,0x64,0x4f,0x6e,0x6c,0x79,0x28,0x29,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x73,0x65,0x74,0x52,0x65,0x61,0x64,0x4f,0x6e,0x6c,0x79,0x28,0x74,0x72,0x75,0x65,0x29,0x20,0x65,0x6c,0x73,0x65,0x20,0x65,0x64,0x69,0x74,0x6f,0x72,0x2e,0x73,0x65,0x74,0x52,0x65,0x61,0x64,0x4f,0x6e,0x6c,0x79,0x28,0x66,0x61,0x6c,0x73,0x65,0x29,0x20,0x65,0x6e,0x64,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x6e,0x6f,0x4f,0x75,0x74,0x70,0x75,0x74,0x28,0x29,0x20,0x69,0x66,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x2e,0x69,0x73,0x56,0x69,0x73,0x69,0x62,0x6c,0x65,0x28,0x29,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x2e,0x73,0x65,0x74,0x56,0x69,0x73,0x69,0x62,0x69,0x6c,0x69,0x74,0x79,0x28,0x66,0x61,0x6c,0x73,0x65,0x29,0x20,0x65,0x6c,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x2e,0x73,0x65,0x74,0x56,0x69,0x73,0x69,0x62,0x69,0x6c,0x69,0x74,0x79,0x28,0x74,0x72,0x75,0x65,0x29,0x20,0x65,0x6e,0x64,0xa ,0x23,0x53,0x45,0x41,0x52,0x43,0x48,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x66,0x69,0x6e,0x64,0x28,0x29,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x72,0x65,0x70,0x6c,0x61,0x63,0x65,0x28,0x29,0xa ,0x23,0x50,0x52,0x4f,0x47,0x52,0x41,0x4d,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x72,0x75,0x6e,0x53,0x6f,0x75,0x72,0x63,0x65,0x28,0x29,0x20,0x70,0x72,0x6f,0x67,0x72,0x61,0x6d,0x28,0x31,0x29,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x64,0x65,0x62,0x75,0x67,0x53,0x6f,0x75,0x72,0x63,0x65,0x28,0x29,0x20,0x70,0x72,0x6f,0x67,0x72,0x61,0x6d,0x28,0x32,0x29,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x62,0x75,0x69,0x6c,0x64,0x28,0x29,0x20,0x70,0x72,0x6f,0x67,0x72,0x61,0x6d,0x28,0x33,0x29,0xa ,0x23,0x41,0x42,0x4f,0x55,0x54,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x61,0x62,0x6f,0x75,0x74,0x28,0x29,0x20,0x64,0x69,0x73,0x70,0x6c,0x61,0x79,0x20,0x22,0x53,0x69,0x6d,0x70,0x6c,0x65,0x50,0x61,0x64,0x20,0x22,0xa ,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x70,0x72,0x6f,0x67,0x72,0x61,0x6d,0x28,0x74,0x79,0x70,0x65,0x29,0xa ,0x9 ,0x69,0x66,0x20,0x69,0x73,0x57,0x69,0x6e,0x64,0x6f,0x77,0x73,0x28,0x29,0x20,0xa ,0x9 ,0x9 ,0x52,0x75,0x6e,0x74,0x69,0x6d,0x65,0x2e,0x65,0x78,0x65,0x63,0x75,0x74,0x65,0x28,0x27,0x65,0x78,0x65,0x63,0x2e,0x62,0x61,0x74,0x20,0x27,0x2b,0x74,0x79,0x70,0x65,0x2b,0x27,0x20,0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x22,0x27,0x2b,0x66,0x69,0x6c,0x65,0x2e,0x61,0x62,0x73,0x6f,0x6c,0x75,0x74,0x65,0x50,0x61,0x74,0x68,0x28,0x29,0x2b,0x27,0x22,0x27,0x29,0xa ,0x9 ,0x65,0x6c,0x69,0x66,0x20,0x69,0x73,0x4c,0x69,0x6e,0x75,0x78,0x28,0x29,0xa ,0x9 ,0x9 ,0xa ,0x9 ,0x65,0x6e,0x64,0xa ,0x9 ,0xa ,0x62,0x6c,0x6f,0x63,0x6b,0x20,0x6e,0x6f,0x74,0x69,0x66,0x79,0x4d,0x65,0x6e,0x75,0x28,0x63,0x6f,0x6e,0x29,0xa ,0x9 ,0x69,0x66,0x20,0x63,0x6f,0x6e,0x20,0x3d,0x3d,0x20,0x30,0xa ,0x9 ,0x9 ,0x6d,0x65,0x6e,0x75,0x42,0x61,0x72,0x2e,0x6d,0x6f,0x64,0x65,0x28,0x33,0x2c,0x31,0x29,0x20,0x23,0x73,0x61,0x76,0x65,0xa ,0x9 ,0x9 ,0x6d,0x65,0x6e,0x75,0x42,0x61,0x72,0x2e,0x6d,0x6f,0x64,0x65,0x28,0x35,0x2c,0x31,0x29,0x20,0x23,0x63,0x6c,0x6f,0x73,0x65,0xa ,0x9 ,0x9 ,0x6d,0x65,0x6e,0x75,0x42,0x61,0x72,0x2e,0x6d,0x6f,0x64,0x65,0x28,0x32,0x33,0x2c,0x31,0x29,0x20,0x23,0x72,0x75,0x6e,0xa ,0x9 ,0x9 ,0x6d,0x65,0x6e,0x75,0x42,0x61,0x72,0x2e,0x6d,0x6f,0x64,0x65,0x28,0x32,0x34,0x2c,0x31,0x29,0x20,0x23,0x64,0x65,0x62,0x75,0x67,0xa ,0x9 ,0x65,0x6c,0x73,0x65,0x20,0xa ,0x9 ,0x9 ,0x6d,0x65,0x6e,0x75,0x42,0x61,0x72,0x2e,0x6d,0x6f,0x64,0x65,0x28,0x33,0x2c,0x30,0x29,0x20,0x23,0x73,0x61,0x76,0x65,0xa ,0x9 ,0x9 ,0x6d,0x65,0x6e,0x75,0x42,0x61,0x72,0x2e,0x6d,0x6f,0x64,0x65,0x28,0x35,0x2c,0x30,0x29,0x20,0x23,0x63,0x6c,0x6f,0x73,0x65,0xa ,0x9 ,0x9 ,0x6d,0x65,0x6e,0x75,0x42,0x61,0x72,0x2e,0x6d,0x6f,0x64,0x65,0x28,0x32,0x33,0x2c,0x30,0x29,0x20,0x23,0x72,0x75,0x6e,0xa ,0x9 ,0x9 ,0x6d,0x65,0x6e,0x75,0x42,0x61,0x72,0x2e,0x6d,0x6f,0x64,0x65,0x28,0x32,0x34,0x2c,0x30,0x29,0x20,0x23,0x64,0x65,0x62,0x75,0x67,0xa ,0x9 ,0x65,0x6e,0x64,0xa ,0x9 };
			
			List* list ; int x ;
			SimpleState *sState ;
			sState = create_instance();
			sState->argc = argc ; 
			sState->argv = argv ; 
			//hack around cmdparams 
			list = simple_state_newvar(sState,"cmdparams");
			simple_list_setint_gc(sState->vm->sState,list,SIMPLE_VAR_TYPE,SIMPLE_VM_LIST);
			simple_list_setlist_gc(sState->vm->sState,list,SIMPLE_VAR_VALUE);
			list = simple_list_getlist(list,SIMPLE_VAR_VALUE);
			for ( x = 0 ; x < sState->vm->sState->argc ; x++ ) {
					simple_list_addstring_gc(sState->vm->sState,list,sState->vm->sState->argv[x]);
			}
			//hack end
			execute_code(sState, (char *) sim_code);
			finalize(sState);
		}

