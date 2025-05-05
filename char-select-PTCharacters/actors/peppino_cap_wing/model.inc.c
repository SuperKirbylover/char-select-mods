Lights1 peppino_cap_wing_CAP_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 peppino_cap_wing_UNDERCAP_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 peppino_cap_wing_metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Gfx peppino_cap_wing_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 peppino_cap_wing_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/peppino/Metal_Shade.rgba16.inc.c"
};

Gfx peppino_cap_wing_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 peppino_cap_wing_Metal_Light_rgba16_rgba16[] = {
	#include "actors/peppino/Metal_Light.rgba16.inc.c"
};

Gfx peppino_cap_wing_wing_2_ia8_aligner[] = {gsSPEndDisplayList()};
u8 peppino_cap_wing_wing_2_ia8[] = {
	#include "actors/peppino/wing_2.ia8.inc.c"
};

Gfx peppino_cap_wing_wing1_ia8_aligner[] = {gsSPEndDisplayList()};
u8 peppino_cap_wing_wing1_ia8[] = {
	#include "actors/peppino/wing1.ia8.inc.c"
};

Vtx peppino_cap_wing_Wing_Cap_mesh_layer_1_vtx_0[59] = {
	{{ {70, 39, -62}, 0, {491, 322}, {70, 171, 194, 255} }},
	{{ {69, 0, -60}, 0, {632, 322}, {75, 175, 193, 255} }},
	{{ {0, 0, -92}, 0, {573, -4}, {0, 174, 159, 255} }},
	{{ {86, 39, 3}, 0, {506, 545}, {94, 172, 10, 255} }},
	{{ {125, 51, 3}, 0, {398, 545}, {82, 159, 7, 255} }},
	{{ {93, 51, -81}, 0, {382, 322}, {63, 163, 196, 255} }},
	{{ {0, 51, -120}, 0, {310, -4}, {0, 164, 168, 255} }},
	{{ {0, 39, -93}, 0, {427, -4}, {0, 176, 158, 255} }},
	{{ {-70, 39, -62}, 0, {491, 322}, {186, 171, 194, 255} }},
	{{ {-69, 0, -60}, 0, {632, 322}, {181, 175, 193, 255} }},
	{{ {-86, 39, 3}, 0, {506, 545}, {162, 172, 10, 255} }},
	{{ {-86, 0, 3}, 0, {643, 545}, {158, 175, 7, 255} }},
	{{ {-59, 39, 61}, 0, {462, 751}, {186, 178, 72, 255} }},
	{{ {-64, 0, 63}, 0, {614, 751}, {182, 183, 73, 255} }},
	{{ {0, 0, 86}, 0, {535, 997}, {0, 177, 99, 255} }},
	{{ {0, 39, 85}, 0, {410, 997}, {0, 176, 99, 255} }},
	{{ {59, 39, 61}, 0, {462, 751}, {70, 178, 72, 255} }},
	{{ {64, 0, 63}, 0, {614, 751}, {74, 183, 73, 255} }},
	{{ {86, 0, 3}, 0, {643, 545}, {98, 175, 7, 255} }},
	{{ {79, 51, 87}, 0, {349, 751}, {53, 155, 56, 255} }},
	{{ {138, 70, 4}, 0, {315, 546}, {124, 25, 7, 255} }},
	{{ {101, 70, -91}, 0, {310, 325}, {90, 23, 170, 255} }},
	{{ {0, 70, -132}, 0, {205, 5}, {0, 16, 130, 255} }},
	{{ {-101, 70, -91}, 0, {310, 325}, {166, 23, 170, 255} }},
	{{ {-93, 51, -81}, 0, {382, 322}, {193, 163, 196, 255} }},
	{{ {-125, 51, 3}, 0, {398, 545}, {174, 159, 7, 255} }},
	{{ {-79, 51, 87}, 0, {349, 751}, {203, 155, 56, 255} }},
	{{ {0, 51, 114}, 0, {286, 997}, {0, 156, 78, 255} }},
	{{ {87, 70, 102}, 0, {264, 735}, {81, 16, 97, 255} }},
	{{ {0, 70, 131}, 0, {170, 986}, {0, 12, 126, 255} }},
	{{ {69, 86, 84}, 0, {192, 715}, {29, 119, 34, 255} }},
	{{ {110, 86, 3}, 0, {239, 540}, {42, 120, 2, 255} }},
	{{ {101, 70, -91}, 0, {310, 325}, {90, 23, 170, 255} }},
	{{ {79, 86, -80}, 0, {228, 336}, {32, 117, 218, 255} }},
	{{ {110, 86, 3}, 0, {239, 540}, {42, 120, 2, 255} }},
	{{ {0, 70, -132}, 0, {205, 5}, {0, 16, 130, 255} }},
	{{ {0, 86, -114}, 0, {89, 52}, {0, 114, 200, 255} }},
	{{ {-79, 86, -80}, 0, {228, 336}, {224, 117, 218, 255} }},
	{{ {-101, 70, -91}, 0, {310, 325}, {166, 23, 170, 255} }},
	{{ {-110, 86, 3}, 0, {239, 540}, {214, 120, 2, 255} }},
	{{ {-138, 70, 4}, 0, {315, 546}, {132, 25, 7, 255} }},
	{{ {-93, 51, -81}, 0, {382, 322}, {193, 163, 196, 255} }},
	{{ {-125, 51, 3}, 0, {398, 545}, {174, 159, 7, 255} }},
	{{ {-79, 51, 87}, 0, {349, 751}, {203, 155, 56, 255} }},
	{{ {-87, 70, 102}, 0, {264, 735}, {175, 16, 97, 255} }},
	{{ {0, 51, 114}, 0, {286, 997}, {0, 156, 78, 255} }},
	{{ {0, 70, 131}, 0, {170, 986}, {0, 12, 126, 255} }},
	{{ {-69, 86, 84}, 0, {192, 715}, {227, 119, 34, 255} }},
	{{ {0, 86, 110}, 0, {59, 926}, {0, 116, 52, 255} }},
	{{ {69, 86, 84}, 0, {192, 715}, {29, 119, 34, 255} }},
	{{ {0, 88, 66}, 0, {2, 787}, {0, 127, 255, 255} }},
	{{ {43, 88, 50}, 0, {102, 659}, {0, 127, 255, 255} }},
	{{ {67, 88, 3}, 0, {144, 526}, {255, 127, 0, 255} }},
	{{ {49, 88, -50}, 0, {123, 362}, {0, 127, 0, 255} }},
	{{ {0, 88, -70}, 0, {2, 193}, {0, 127, 0, 255} }},
	{{ {-49, 88, -50}, 0, {123, 362}, {0, 127, 0, 255} }},
	{{ {-67, 88, 3}, 0, {144, 526}, {1, 127, 0, 255} }},
	{{ {-43, 88, 50}, 0, {102, 659}, {0, 127, 255, 255} }},
	{{ {0, 82, -2}, 0, {2, 496}, {0, 127, 0, 255} }},
};

Gfx peppino_cap_wing_Wing_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(peppino_cap_wing_Wing_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(6, 5, 0, 0, 6, 0, 7, 0),
	gsSP2Triangles(0, 2, 7, 0, 8, 7, 2, 0),
	gsSP2Triangles(8, 2, 9, 0, 9, 10, 8, 0),
	gsSP2Triangles(9, 11, 10, 0, 11, 12, 10, 0),
	gsSP2Triangles(11, 13, 12, 0, 12, 13, 14, 0),
	gsSP2Triangles(12, 14, 15, 0, 16, 15, 14, 0),
	gsSP2Triangles(16, 14, 17, 0, 18, 16, 17, 0),
	gsSP2Triangles(18, 3, 16, 0, 1, 3, 18, 0),
	gsSP2Triangles(3, 19, 16, 0, 3, 4, 19, 0),
	gsSP2Triangles(20, 19, 4, 0, 5, 20, 4, 0),
	gsSP2Triangles(5, 21, 20, 0, 21, 5, 6, 0),
	gsSP2Triangles(21, 6, 22, 0, 23, 22, 6, 0),
	gsSP2Triangles(23, 6, 24, 0, 6, 8, 24, 0),
	gsSP2Triangles(6, 7, 8, 0, 8, 25, 24, 0),
	gsSP2Triangles(8, 10, 25, 0, 10, 26, 25, 0),
	gsSP2Triangles(10, 12, 26, 0, 26, 12, 15, 0),
	gsSP2Triangles(26, 15, 27, 0, 19, 27, 15, 0),
	gsSP2Triangles(19, 15, 16, 0, 28, 27, 19, 0),
	gsSP2Triangles(28, 29, 27, 0, 30, 29, 28, 0),
	gsSP2Triangles(31, 30, 28, 0, 31, 28, 20, 0),
	gsSP2Triangles(20, 28, 19, 0, 21, 31, 20, 0),
	gsSPVertex(peppino_cap_wing_Wing_Cap_mesh_layer_1_vtx_0 + 32, 27, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(1, 3, 4, 0, 5, 4, 3, 0),
	gsSP2Triangles(5, 3, 6, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 8, 7, 0, 9, 8, 6, 0),
	gsSP2Triangles(9, 10, 8, 0, 8, 10, 11, 0),
	gsSP2Triangles(8, 11, 12, 0, 12, 11, 13, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
	gsSP2Triangles(15, 14, 16, 0, 17, 16, 14, 0),
	gsSP2Triangles(17, 18, 16, 0, 17, 19, 18, 0),
	gsSP2Triangles(20, 19, 17, 0, 20, 17, 2, 0),
	gsSP2Triangles(2, 21, 20, 0, 2, 1, 21, 0),
	gsSP2Triangles(1, 22, 21, 0, 1, 4, 22, 0),
	gsSP2Triangles(5, 22, 4, 0, 5, 23, 22, 0),
	gsSP2Triangles(7, 23, 5, 0, 7, 24, 23, 0),
	gsSP2Triangles(24, 7, 15, 0, 7, 12, 15, 0),
	gsSP2Triangles(7, 8, 12, 0, 24, 15, 25, 0),
	gsSP2Triangles(15, 18, 25, 0, 15, 16, 18, 0),
	gsSP2Triangles(25, 18, 26, 0, 19, 26, 18, 0),
	gsSP2Triangles(20, 26, 19, 0, 20, 21, 26, 0),
	gsSP2Triangles(21, 22, 26, 0, 23, 26, 22, 0),
	gsSP2Triangles(24, 26, 23, 0, 24, 25, 26, 0),
	gsSPEndDisplayList(),
};

Vtx peppino_cap_wing_Wing_Cap_mesh_layer_1_vtx_1[8] = {
	{{ {0, 0, -92}, 0, {573, -4}, {0, 174, 159, 255} }},
	{{ {69, 0, -60}, 0, {632, 322}, {75, 175, 193, 255} }},
	{{ {86, 0, 3}, 0, {643, 545}, {98, 175, 7, 255} }},
	{{ {-86, 0, 3}, 0, {643, 545}, {158, 175, 7, 255} }},
	{{ {0, 0, 86}, 0, {535, 997}, {0, 177, 99, 255} }},
	{{ {64, 0, 63}, 0, {614, 751}, {74, 183, 73, 255} }},
	{{ {-64, 0, 63}, 0, {614, 751}, {182, 183, 73, 255} }},
	{{ {-69, 0, -60}, 0, {632, 322}, {181, 175, 193, 255} }},
};

Gfx peppino_cap_wing_Wing_Cap_mesh_layer_1_tri_1[] = {
	gsSPVertex(peppino_cap_wing_Wing_Cap_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSP2Triangles(4, 6, 3, 0, 3, 7, 0, 0),
	gsSPEndDisplayList(),
};

Vtx peppino_cap_wing_Wings_mesh_layer_4_vtx_0[8] = {
	{{ {126, -24, -61}, 0, {-16, 1978}, {90, 76, 48, 255} }},
	{{ {196, -63, -130}, 0, {974, 1978}, {90, 76, 48, 255} }},
	{{ {142, 88, -269}, 0, {974, -34}, {90, 76, 48, 255} }},
	{{ {73, 127, -200}, 0, {-16, -34}, {90, 76, 48, 255} }},
	{{ {-126, -24, -61}, 0, {-16, 1978}, {90, 180, 208, 255} }},
	{{ {-196, -63, -130}, 0, {974, 1978}, {90, 180, 208, 255} }},
	{{ {-142, 88, -269}, 0, {974, -34}, {90, 180, 208, 255} }},
	{{ {-73, 127, -200}, 0, {-16, -34}, {90, 180, 208, 255} }},
};

Gfx peppino_cap_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(peppino_cap_wing_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx peppino_cap_wing_Wings_mesh_layer_4_vtx_1[8] = {
	{{ {4, 166, -131}, 0, {-16, -34}, {90, 76, 48, 255} }},
	{{ {57, 15, 8}, 0, {-16, 1978}, {90, 76, 48, 255} }},
	{{ {126, -24, -61}, 0, {974, 1978}, {90, 76, 48, 255} }},
	{{ {73, 127, -200}, 0, {974, -34}, {90, 76, 48, 255} }},
	{{ {-4, 166, -131}, 0, {-16, -34}, {90, 180, 208, 255} }},
	{{ {-126, -24, -61}, 0, {974, 1978}, {90, 180, 208, 255} }},
	{{ {-73, 127, -200}, 0, {974, -34}, {90, 180, 208, 255} }},
	{{ {-57, 15, 8}, 0, {-16, 1978}, {90, 180, 208, 255} }},
};

Gfx peppino_cap_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(peppino_cap_wing_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_peppino_cap_wing_CAP[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_peppino_cap_wing_UNDERCAP[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT, SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 115, 115, 115, 255),
	gsSPEndDisplayList(),
};

Gfx mat_peppino_cap_wing_metal[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, peppino_cap_wing_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, peppino_cap_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_peppino_cap_wing_metal[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_peppino_cap_wing_Wing_Tip[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, peppino_cap_wing_wing_2_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_peppino_cap_wing_Wing_Tip[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_peppino_cap_wing_Wing_Base[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, peppino_cap_wing_wing1_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_peppino_cap_wing_Wing_Base[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx peppino_cap_wing_Wing_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_peppino_cap_wing_CAP),
	gsSPDisplayList(peppino_cap_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_peppino_cap_wing_UNDERCAP),
	gsSPDisplayList(peppino_cap_wing_Wing_Cap_mesh_layer_1_tri_1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx peppino_cap_wing_Wing_Cap_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_peppino_cap_wing_metal),
	gsSPDisplayList(peppino_cap_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(peppino_cap_wing_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_peppino_cap_wing_metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx peppino_cap_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_peppino_cap_wing_Wing_Tip),
	gsSPDisplayList(peppino_cap_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_peppino_cap_wing_Wing_Tip),
	gsSPDisplayList(mat_peppino_cap_wing_Wing_Base),
	gsSPDisplayList(peppino_cap_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_peppino_cap_wing_Wing_Base),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx peppino_cap_wing_Wings_mesh_layer_4_mat_override_metal_0[] = {
	gsSPDisplayList(mat_peppino_cap_wing_Wing_Tip),
	gsSPDisplayList(peppino_cap_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_peppino_cap_wing_Wing_Tip),
	gsSPDisplayList(mat_peppino_cap_wing_Wing_Base),
	gsSPDisplayList(peppino_cap_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_peppino_cap_wing_Wing_Base),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

