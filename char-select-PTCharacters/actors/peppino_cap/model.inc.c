Lights1 peppino_cap_CAP_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 peppino_cap_UNDERCAP_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 peppino_cap_metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Gfx peppino_cap_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 peppino_cap_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/peppino/Metal_Shade.rgba16.inc.c"
};

Gfx peppino_cap_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 peppino_cap_Metal_Light_rgba16_rgba16[] = {
	#include "actors/peppino/Metal_Light.rgba16.inc.c"
};

Vtx peppino_cap_Normal_Cap_DL_mesh_layer_1_vtx_0[58] = {
	{{ {-59, 40, 61}, 0, {462, 751}, {186, 178, 72, 255} }},
	{{ {-64, 0, 63}, 0, {614, 751}, {182, 183, 73, 255} }},
	{{ {0, 0, 86}, 0, {535, 997}, {0, 177, 99, 255} }},
	{{ {-86, 0, 3}, 0, {643, 545}, {158, 175, 7, 255} }},
	{{ {-86, 40, 3}, 0, {506, 545}, {162, 172, 10, 255} }},
	{{ {-79, 51, 87}, 0, {349, 751}, {203, 155, 56, 255} }},
	{{ {0, 40, 85}, 0, {410, 997}, {0, 176, 99, 255} }},
	{{ {59, 40, 61}, 0, {462, 751}, {70, 178, 72, 255} }},
	{{ {64, 0, 63}, 0, {614, 751}, {74, 183, 73, 255} }},
	{{ {86, 0, 3}, 0, {643, 545}, {98, 175, 7, 255} }},
	{{ {86, 40, 3}, 0, {506, 545}, {94, 172, 10, 255} }},
	{{ {69, 0, -60}, 0, {632, 322}, {75, 175, 193, 255} }},
	{{ {70, 40, -62}, 0, {491, 322}, {70, 171, 194, 255} }},
	{{ {0, 0, -92}, 0, {573, -4}, {0, 174, 159, 255} }},
	{{ {0, 40, -93}, 0, {427, -4}, {0, 176, 158, 255} }},
	{{ {-70, 40, -62}, 0, {491, 322}, {186, 171, 194, 255} }},
	{{ {-69, 0, -60}, 0, {632, 322}, {181, 175, 193, 255} }},
	{{ {-125, 51, 3}, 0, {398, 545}, {174, 159, 7, 255} }},
	{{ {-138, 71, 4}, 0, {315, 546}, {132, 25, 7, 255} }},
	{{ {-87, 71, 102}, 0, {264, 735}, {175, 16, 97, 255} }},
	{{ {0, 51, 114}, 0, {286, 997}, {0, 156, 78, 255} }},
	{{ {79, 51, 87}, 0, {349, 751}, {53, 155, 56, 255} }},
	{{ {125, 51, 3}, 0, {398, 545}, {82, 159, 7, 255} }},
	{{ {93, 51, -81}, 0, {382, 322}, {63, 163, 196, 255} }},
	{{ {0, 51, -120}, 0, {310, -4}, {0, 164, 168, 255} }},
	{{ {-93, 51, -81}, 0, {382, 322}, {193, 163, 196, 255} }},
	{{ {-101, 71, -91}, 0, {310, 325}, {166, 23, 170, 255} }},
	{{ {-110, 86, 3}, 0, {239, 540}, {214, 120, 2, 255} }},
	{{ {-69, 86, 84}, 0, {192, 715}, {227, 119, 34, 255} }},
	{{ {0, 71, 131}, 0, {170, 986}, {0, 12, 126, 255} }},
	{{ {87, 71, 102}, 0, {264, 735}, {81, 16, 97, 255} }},
	{{ {138, 71, 4}, 0, {315, 546}, {124, 25, 7, 255} }},
	{{ {93, 51, -81}, 0, {382, 322}, {63, 163, 196, 255} }},
	{{ {101, 71, -91}, 0, {310, 325}, {90, 23, 170, 255} }},
	{{ {138, 71, 4}, 0, {315, 546}, {124, 25, 7, 255} }},
	{{ {0, 51, -120}, 0, {310, -4}, {0, 164, 168, 255} }},
	{{ {0, 71, -132}, 0, {205, 5}, {0, 16, 130, 255} }},
	{{ {-101, 71, -91}, 0, {310, 325}, {166, 23, 170, 255} }},
	{{ {-93, 51, -81}, 0, {382, 322}, {193, 163, 196, 255} }},
	{{ {-79, 86, -80}, 0, {228, 336}, {224, 117, 218, 255} }},
	{{ {0, 86, -114}, 0, {89, 52}, {0, 114, 200, 255} }},
	{{ {0, 88, -70}, 0, {2, 193}, {0, 127, 0, 255} }},
	{{ {-49, 88, -50}, 0, {123, 362}, {0, 127, 0, 255} }},
	{{ {-110, 86, 3}, 0, {239, 540}, {214, 120, 2, 255} }},
	{{ {-67, 88, 3}, 0, {144, 526}, {1, 127, 0, 255} }},
	{{ {-69, 86, 84}, 0, {192, 715}, {227, 119, 34, 255} }},
	{{ {-43, 88, 50}, 0, {102, 659}, {0, 127, 255, 255} }},
	{{ {0, 88, 66}, 0, {2, 787}, {0, 127, 255, 255} }},
	{{ {0, 86, 110}, 0, {59, 926}, {0, 116, 52, 255} }},
	{{ {0, 71, 131}, 0, {170, 986}, {0, 12, 126, 255} }},
	{{ {69, 86, 84}, 0, {192, 715}, {29, 119, 34, 255} }},
	{{ {87, 71, 102}, 0, {264, 735}, {81, 16, 97, 255} }},
	{{ {110, 86, 3}, 0, {239, 540}, {42, 120, 2, 255} }},
	{{ {79, 86, -80}, 0, {228, 336}, {32, 117, 218, 255} }},
	{{ {49, 88, -50}, 0, {123, 362}, {0, 127, 0, 255} }},
	{{ {0, 82, -2}, 0, {2, 496}, {0, 127, 0, 255} }},
	{{ {43, 88, 50}, 0, {102, 659}, {0, 127, 255, 255} }},
	{{ {67, 88, 3}, 0, {144, 526}, {255, 127, 0, 255} }},
};

Gfx peppino_cap_Normal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(peppino_cap_Normal_Cap_DL_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 0, 4, 0, 4, 0, 5, 0),
	gsSP2Triangles(5, 0, 6, 0, 0, 2, 6, 0),
	gsSP2Triangles(7, 6, 2, 0, 7, 2, 8, 0),
	gsSP2Triangles(9, 7, 8, 0, 9, 10, 7, 0),
	gsSP2Triangles(11, 10, 9, 0, 11, 12, 10, 0),
	gsSP2Triangles(12, 11, 13, 0, 12, 13, 14, 0),
	gsSP2Triangles(15, 14, 13, 0, 15, 13, 16, 0),
	gsSP2Triangles(16, 4, 15, 0, 16, 3, 4, 0),
	gsSP2Triangles(15, 4, 17, 0, 4, 5, 17, 0),
	gsSP2Triangles(18, 17, 5, 0, 18, 5, 19, 0),
	gsSP2Triangles(19, 5, 20, 0, 5, 6, 20, 0),
	gsSP2Triangles(21, 20, 6, 0, 21, 6, 7, 0),
	gsSP2Triangles(10, 21, 7, 0, 10, 22, 21, 0),
	gsSP2Triangles(12, 22, 10, 0, 12, 23, 22, 0),
	gsSP2Triangles(24, 23, 12, 0, 24, 12, 14, 0),
	gsSP2Triangles(24, 14, 15, 0, 24, 15, 25, 0),
	gsSP2Triangles(15, 17, 25, 0, 25, 17, 18, 0),
	gsSP2Triangles(25, 18, 26, 0, 26, 18, 27, 0),
	gsSP2Triangles(27, 18, 19, 0, 27, 19, 28, 0),
	gsSP2Triangles(28, 19, 29, 0, 19, 20, 29, 0),
	gsSP2Triangles(30, 29, 20, 0, 30, 20, 21, 0),
	gsSP2Triangles(31, 30, 21, 0, 31, 21, 22, 0),
	gsSP1Triangle(23, 31, 22, 0),
	gsSPVertex(peppino_cap_Normal_Cap_DL_mesh_layer_1_vtx_0 + 32, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(1, 3, 4, 0, 5, 4, 3, 0),
	gsSP2Triangles(5, 3, 6, 0, 7, 4, 5, 0),
	gsSP2Triangles(7, 8, 4, 0, 7, 9, 8, 0),
	gsSP2Triangles(7, 10, 9, 0, 11, 10, 7, 0),
	gsSP2Triangles(5, 11, 7, 0, 11, 12, 10, 0),
	gsSP2Triangles(12, 11, 13, 0, 12, 13, 14, 0),
	gsSP2Triangles(13, 15, 14, 0, 13, 16, 15, 0),
	gsSP2Triangles(13, 17, 16, 0, 18, 16, 17, 0),
	gsSP2Triangles(18, 17, 19, 0, 20, 18, 19, 0),
	gsSP2Triangles(20, 19, 2, 0, 1, 20, 2, 0),
	gsSP2Triangles(1, 21, 20, 0, 21, 1, 4, 0),
	gsSP2Triangles(21, 4, 8, 0, 21, 8, 9, 0),
	gsSP2Triangles(21, 9, 22, 0, 22, 9, 23, 0),
	gsSP2Triangles(10, 23, 9, 0, 12, 23, 10, 0),
	gsSP2Triangles(12, 14, 23, 0, 14, 15, 23, 0),
	gsSP2Triangles(24, 23, 15, 0, 18, 24, 15, 0),
	gsSP2Triangles(18, 15, 16, 0, 25, 24, 18, 0),
	gsSP2Triangles(25, 23, 24, 0, 25, 22, 23, 0),
	gsSP2Triangles(20, 22, 25, 0, 25, 18, 20, 0),
	gsSP1Triangle(20, 21, 22, 0),
	gsSPEndDisplayList(),
};

Vtx peppino_cap_Normal_Cap_DL_mesh_layer_1_vtx_1[8] = {
	{{ {0, 0, -92}, 0, {573, -4}, {0, 174, 159, 255} }},
	{{ {69, 0, -60}, 0, {632, 322}, {75, 175, 193, 255} }},
	{{ {86, 0, 3}, 0, {643, 545}, {98, 175, 7, 255} }},
	{{ {-86, 0, 3}, 0, {643, 545}, {158, 175, 7, 255} }},
	{{ {0, 0, 86}, 0, {535, 997}, {0, 177, 99, 255} }},
	{{ {64, 0, 63}, 0, {614, 751}, {74, 183, 73, 255} }},
	{{ {-64, 0, 63}, 0, {-16, 1008}, {182, 183, 73, 255} }},
	{{ {-69, 0, -60}, 0, {632, 322}, {181, 175, 193, 255} }},
};

Gfx peppino_cap_Normal_Cap_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(peppino_cap_Normal_Cap_DL_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSP2Triangles(4, 6, 3, 0, 3, 7, 0, 0),
	gsSPEndDisplayList(),
};


Gfx mat_peppino_cap_CAP[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_peppino_cap_UNDERCAP[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT, SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 115, 115, 115, 255),
	gsSPEndDisplayList(),
};

Gfx mat_peppino_cap_metal[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPSetLights1(peppino_cap_metal_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, peppino_cap_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, peppino_cap_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_peppino_cap_metal[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx peppino_cap_Normal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_peppino_cap_CAP),
	gsSPDisplayList(peppino_cap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_peppino_cap_UNDERCAP),
	gsSPDisplayList(peppino_cap_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx peppino_cap_Normal_Cap_DL_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_peppino_cap_metal),
	gsSPDisplayList(peppino_cap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(peppino_cap_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_peppino_cap_metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

