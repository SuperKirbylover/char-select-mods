Lights1 brian_skl_cap_Collar__CAP__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 brian_skl_cap_Tag__GLOVES__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 brian_skl_cap_Collar_Black_lights = gdSPDefLights1(
	0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Lights1 brian_skl_cap_Metal__METAL__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Gfx brian_skl_cap_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 brian_skl_cap_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/brian_skl/Metal_Shade.rgba16.inc.c"
};

Gfx brian_skl_cap_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 brian_skl_cap_Metal_Light_rgba16_rgba16[] = {
	#include "actors/brian_skl/Metal_Light.rgba16.inc.c"
};

Vtx brian_skl_cap_Normal_Cap_DL_mesh_layer_1_vtx_0[26] = {
	{{ {77, 32, 59}, 0, {973, -11}, {103, 10, 74, 255} }},
	{{ {0, 0, 104}, 0, {971, 469}, {0, 7, 127, 255} }},
	{{ {80, 0, 59}, 0, {973, 469}, {106, 8, 70, 255} }},
	{{ {0, 32, 103}, 0, {971, -11}, {0, 7, 127, 255} }},
	{{ {-77, 32, 59}, 0, {973, -11}, {153, 10, 74, 255} }},
	{{ {-80, 0, 59}, 0, {973, 469}, {150, 8, 70, 255} }},
	{{ {77, 32, 59}, 0, {975, -11}, {103, 10, 74, 255} }},
	{{ {80, 0, 59}, 0, {975, 469}, {106, 8, 70, 255} }},
	{{ {87, 32, 1}, 0, {978, -11}, {127, 2, 0, 255} }},
	{{ {87, 0, 0}, 0, {977, 469}, {127, 1, 255, 255} }},
	{{ {80, 32, -51}, 0, {980, -11}, {115, 4, 202, 255} }},
	{{ {81, 0, -52}, 0, {979, 468}, {115, 5, 203, 255} }},
	{{ {51, 32, -81}, 0, {981, -11}, {63, 3, 146, 255} }},
	{{ {53, 0, -81}, 0, {981, 468}, {64, 3, 147, 255} }},
	{{ {0, 32, -94}, 0, {984, -11}, {0, 1, 129, 255} }},
	{{ {0, 0, -95}, 0, {984, 468}, {0, 1, 129, 255} }},
	{{ {0, 32, -94}, 0, {984, -11}, {0, 1, 129, 255} }},
	{{ {0, 0, -95}, 0, {984, 468}, {0, 1, 129, 255} }},
	{{ {-53, 0, -81}, 0, {981, 468}, {192, 3, 147, 255} }},
	{{ {-51, 32, -81}, 0, {981, -11}, {193, 3, 146, 255} }},
	{{ {-81, 0, -52}, 0, {979, 468}, {141, 5, 203, 255} }},
	{{ {-80, 32, -51}, 0, {980, -11}, {141, 4, 202, 255} }},
	{{ {-87, 0, 0}, 0, {977, 469}, {129, 1, 255, 255} }},
	{{ {-87, 32, 1}, 0, {978, -11}, {129, 2, 0, 255} }},
	{{ {-80, 0, 59}, 0, {975, 469}, {150, 8, 70, 255} }},
	{{ {-77, 32, 59}, 0, {975, -11}, {153, 10, 74, 255} }},
};

Gfx brian_skl_cap_Normal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(brian_skl_cap_Normal_Cap_DL_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(4, 5, 1, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(brian_skl_cap_Normal_Cap_DL_mesh_layer_1_vtx_0 + 16, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSPEndDisplayList(),
};

Vtx brian_skl_cap_Normal_Cap_DL_mesh_layer_1_vtx_1[15] = {
	{{ {0, 7, 162}, 0, {961, 531}, {3, 89, 90, 255} }},
	{{ {-6, -3, 166}, 0, {962, 531}, {213, 193, 101, 255} }},
	{{ {6, -3, 166}, 0, {960, 531}, {51, 196, 100, 255} }},
	{{ {-17, -2, 158}, 0, {965, 531}, {161, 204, 66, 255} }},
	{{ {-14, 9, 147}, 0, {965, 532}, {181, 102, 12, 255} }},
	{{ {0, 15, 148}, 0, {961, 532}, {0, 126, 17, 255} }},
	{{ {14, 9, 147}, 0, {958, 532}, {75, 101, 15, 255} }},
	{{ {17, -2, 158}, 0, {957, 531}, {91, 207, 74, 255} }},
	{{ {-21, 0, 146}, 0, {967, 532}, {139, 207, 250, 255} }},
	{{ {-17, 2, 134}, 0, {966, 532}, {165, 228, 172, 255} }},
	{{ {-6, 3, 126}, 0, {963, 533}, {205, 224, 144, 255} }},
	{{ {0, 11, 132}, 0, {961, 533}, {253, 109, 192, 255} }},
	{{ {17, 2, 134}, 0, {956, 532}, {95, 223, 178, 255} }},
	{{ {21, 0, 146}, 0, {956, 532}, {117, 207, 250, 255} }},
	{{ {6, 3, 126}, 0, {959, 533}, {43, 221, 142, 255} }},
};

Gfx brian_skl_cap_Normal_Cap_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(brian_skl_cap_Normal_Cap_DL_mesh_layer_1_vtx_1 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(5, 4, 0, 0),
	gsSP1Triangle(5, 0, 6, 0),
	gsSP1Triangle(6, 0, 2, 0),
	gsSP1Triangle(7, 6, 2, 0),
	gsSP1Triangle(7, 2, 1, 0),
	gsSP1Triangle(1, 3, 7, 0),
	gsSP1Triangle(3, 8, 7, 0),
	gsSP1Triangle(4, 8, 3, 0),
	gsSP1Triangle(4, 9, 8, 0),
	gsSP1Triangle(4, 10, 9, 0),
	gsSP1Triangle(11, 10, 4, 0),
	gsSP1Triangle(5, 11, 4, 0),
	gsSP1Triangle(6, 11, 5, 0),
	gsSP1Triangle(6, 12, 11, 0),
	gsSP1Triangle(13, 12, 6, 0),
	gsSP1Triangle(13, 6, 7, 0),
	gsSP1Triangle(12, 13, 7, 0),
	gsSP1Triangle(12, 7, 8, 0),
	gsSP1Triangle(10, 12, 8, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(10, 14, 12, 0),
	gsSP1Triangle(11, 14, 10, 0),
	gsSP1Triangle(12, 14, 11, 0),
	gsSPEndDisplayList(),
};

Vtx brian_skl_cap_Normal_Cap_DL_mesh_layer_1_vtx_2[4] = {
	{{ {5, 3, 127}, 0, {922, 460}, {0, 127, 250, 255} }},
	{{ {5, 2, 104}, 0, {922, 460}, {0, 127, 250, 255} }},
	{{ {-5, 3, 127}, 0, {921, 460}, {0, 127, 250, 255} }},
	{{ {-5, 2, 104}, 0, {921, 460}, {0, 127, 250, 255} }},
};

Gfx brian_skl_cap_Normal_Cap_DL_mesh_layer_1_tri_2[] = {
	gsSPVertex(brian_skl_cap_Normal_Cap_DL_mesh_layer_1_vtx_2 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_brian_skl_cap_Collar__CAP_[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_brian_skl_cap_Collar__CAP_[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_brian_skl_cap_Tag__GLOVES_[] = {
	gsSPCopyLightsPlayerPart(GLOVES),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_brian_skl_cap_Collar_Black[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(brian_skl_cap_Collar_Black_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_brian_skl_cap_Collar_Black[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_brian_skl_cap_Metal__METAL_[] = {
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, brian_skl_cap_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, brian_skl_cap_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_brian_skl_cap_Metal__METAL_[] = {
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx brian_skl_cap_Normal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_brian_skl_cap_Collar__CAP_),
	gsSPDisplayList(brian_skl_cap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_brian_skl_cap_Collar__CAP_),
	gsSPDisplayList(mat_brian_skl_cap_Tag__GLOVES_),
	gsSPDisplayList(brian_skl_cap_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_brian_skl_cap_Collar_Black),
	gsSPDisplayList(brian_skl_cap_Normal_Cap_DL_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_brian_skl_cap_Collar_Black),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx brian_skl_cap_Normal_Cap_DL_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_brian_skl_cap_Metal__METAL_),
	gsSPDisplayList(brian_skl_cap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(brian_skl_cap_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(brian_skl_cap_Normal_Cap_DL_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_brian_skl_cap_Metal__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

