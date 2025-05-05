Lights1 papyrus_cap_Cape__CAP__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 papyrus_cap_Cape_shadow__CAP__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 papyrus_cap_Metal__METAL__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Gfx papyrus_cap_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 papyrus_cap_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/papyrus/Metal_Shade.rgba16.inc.c"
};

Gfx papyrus_cap_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 papyrus_cap_Metal_Light_rgba16_rgba16[] = {
	#include "actors/papyrus/Metal_Light.rgba16.inc.c"
};

Vtx papyrus_cap_Normal_Cap_DL_mesh_layer_1_vtx_0[28] = {
	{{ {0, 20, -138}, 0, {1008, 496}, {0, 125, 235, 255} }},
	{{ {-82, 38, -75}, 0, {880, -16}, {244, 124, 234, 255} }},
	{{ {0, 32, -106}, 0, {1008, -16}, {0, 125, 234, 255} }},
	{{ {-127, 19, -95}, 0, {880, 496}, {161, 82, 236, 255} }},
	{{ {-137, 15, -262}, 0, {880, 496}, {175, 75, 193, 255} }},
	{{ {0, 16, -277}, 0, {1008, 496}, {0, 91, 167, 255} }},
	{{ {137, 15, -262}, 0, {880, 496}, {81, 75, 193, 255} }},
	{{ {127, 19, -95}, 0, {880, 496}, {95, 82, 236, 255} }},
	{{ {82, 38, -75}, 0, {880, -16}, {12, 124, 234, 255} }},
	{{ {106, 41, -1}, 0, {752, -16}, {12, 126, 4, 255} }},
	{{ {153, 19, -3}, 0, {752, 496}, {125, 1, 20, 255} }},
	{{ {73, 37, 72}, 0, {624, -16}, {27, 117, 41, 255} }},
	{{ {91, 6, 94}, 0, {624, 496}, {82, 212, 87, 255} }},
	{{ {0, 30, 111}, 0, {496, -16}, {0, 119, 45, 255} }},
	{{ {0, 18, 131}, 0, {496, 496}, {0, 85, 94, 255} }},
	{{ {-91, 6, 94}, 0, {624, 496}, {174, 212, 87, 255} }},
	{{ {-73, 37, 72}, 0, {624, -16}, {229, 117, 41, 255} }},
	{{ {-153, 19, -3}, 0, {752, 496}, {131, 1, 20, 255} }},
	{{ {-106, 41, -1}, 0, {752, -16}, {244, 126, 4, 255} }},
	{{ {-127, 2, -86}, 0, {880, 496}, {177, 157, 247, 255} }},
	{{ {-137, 0, -263}, 0, {880, 496}, {178, 185, 186, 255} }},
	{{ {0, 1, -279}, 0, {1008, 496}, {0, 174, 159, 255} }},
	{{ {137, 0, -263}, 0, {880, 496}, {78, 185, 186, 255} }},
	{{ {127, 2, -86}, 0, {880, 496}, {79, 157, 247, 255} }},
	{{ {0, 3, -130}, 0, {1008, 496}, {0, 129, 1, 255} }},
	{{ {0, 0, 107}, 0, {624, 496}, {0, 129, 7, 255} }},
	{{ {20, 0, 165}, 0, {560, 496}, {0, 232, 125, 255} }},
	{{ {-20, 0, 165}, 0, {560, 496}, {0, 232, 125, 255} }},
};

Gfx papyrus_cap_Normal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(papyrus_cap_Normal_Cap_DL_mesh_layer_1_vtx_0 + 0, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 6, 5, 0, 0, 7, 6, 0),
	gsSP2Triangles(0, 8, 7, 0, 0, 2, 8, 0),
	gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
	gsSP2Triangles(10, 9, 11, 0, 10, 11, 12, 0),
	gsSP2Triangles(12, 11, 13, 0, 12, 13, 14, 0),
	gsSP2Triangles(15, 14, 13, 0, 15, 13, 16, 0),
	gsSP2Triangles(17, 15, 16, 0, 17, 16, 18, 0),
	gsSP2Triangles(3, 17, 18, 0, 3, 18, 1, 0),
	gsSP2Triangles(17, 3, 19, 0, 3, 20, 19, 0),
	gsSP2Triangles(3, 4, 20, 0, 21, 20, 4, 0),
	gsSP2Triangles(21, 4, 5, 0, 6, 21, 5, 0),
	gsSP2Triangles(6, 22, 21, 0, 7, 22, 6, 0),
	gsSP2Triangles(7, 23, 22, 0, 10, 23, 7, 0),
	gsSP2Triangles(12, 23, 10, 0, 23, 12, 24, 0),
	gsSP2Triangles(12, 25, 24, 0, 12, 26, 25, 0),
	gsSP2Triangles(14, 26, 12, 0, 14, 25, 26, 0),
	gsSP2Triangles(14, 27, 25, 0, 14, 15, 27, 0),
	gsSP2Triangles(15, 25, 27, 0, 15, 24, 25, 0),
	gsSP2Triangles(19, 24, 15, 0, 15, 17, 19, 0),
	gsSP2Triangles(24, 19, 20, 0, 24, 20, 21, 0),
	gsSP2Triangles(22, 24, 21, 0, 22, 23, 24, 0),
	gsSPEndDisplayList(),
};

Vtx papyrus_cap_Normal_Cap_DL_mesh_layer_1_vtx_1[11] = {
	{{ {-82, 38, -75}, 0, {414, 578}, {244, 124, 234, 255} }},
	{{ {0, 20, 8}, 0, {368, 245}, {0, 127, 255, 255} }},
	{{ {0, 32, -106}, 0, {240, 506}, {0, 125, 234, 255} }},
	{{ {-77, 29, 4}, 0, {414, 752}, {32, 123, 253, 255} }},
	{{ {-106, 41, -1}, 0, {486, 752}, {244, 126, 4, 255} }},
	{{ {-73, 37, 72}, 0, {414, 926}, {229, 117, 41, 255} }},
	{{ {0, 30, 111}, 0, {496, -16}, {0, 119, 45, 255} }},
	{{ {73, 37, 72}, 0, {414, 926}, {27, 117, 41, 255} }},
	{{ {77, 29, 4}, 0, {414, 752}, {224, 123, 253, 255} }},
	{{ {106, 41, -1}, 0, {486, 752}, {12, 126, 4, 255} }},
	{{ {82, 38, -75}, 0, {414, 578}, {12, 124, 234, 255} }},
};

Gfx papyrus_cap_Normal_Cap_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(papyrus_cap_Normal_Cap_DL_mesh_layer_1_vtx_1 + 0, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(5, 1, 3, 0, 5, 6, 1, 0),
	gsSP2Triangles(1, 6, 7, 0, 1, 7, 8, 0),
	gsSP2Triangles(9, 8, 7, 0, 9, 10, 8, 0),
	gsSP2Triangles(10, 1, 8, 0, 10, 2, 1, 0),
	gsSPEndDisplayList(),
};


Gfx mat_papyrus_cap_Cape__CAP_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_papyrus_cap_Cape_shadow__CAP_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT, SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 115, 115, 115, 255),
	gsSPEndDisplayList(),
};

Gfx mat_papyrus_cap_Metal__METAL_[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, papyrus_cap_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, papyrus_cap_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_papyrus_cap_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx papyrus_cap_Normal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_papyrus_cap_Cape__CAP_),
	gsSPDisplayList(papyrus_cap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_papyrus_cap_Cape_shadow__CAP_),
	gsSPDisplayList(papyrus_cap_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx papyrus_cap_Normal_Cap_DL_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_papyrus_cap_Metal__METAL_),
	gsSPDisplayList(papyrus_cap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(papyrus_cap_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_papyrus_cap_Metal__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

