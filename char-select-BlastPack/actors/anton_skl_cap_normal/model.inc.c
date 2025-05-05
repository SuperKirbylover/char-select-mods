Lights1 anton_skl_cap_normal_Cap__CAP__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 anton_skl_cap_normal_Metal__METAL__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Gfx anton_skl_cap_normal_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_normal_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/anton_skl_cap_normal/Metal_Shade_rgba16.rgba16.inc.c"
};

Gfx anton_skl_cap_normal_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_normal_Metal_Light_rgba16_rgba16[] = {
	#include "actors/anton_skl_cap_normal/Metal_Light_rgba16.rgba16.inc.c"
};

Vtx anton_skl_cap_normal_Normal_Cap_DL_mesh_layer_1_vtx_0[64] = {
	{{{24, 17, 20}, 0, {400, 1008}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{33, 17, 28}, 0, {400, 1008}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{39, 17, -26}, 0, {394, 752}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-33, 17, 28}, 0, {400, 1008}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{33, 17, 28}, 0, {400, 1008}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{24, 17, 20}, 0, {400, 1008}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-33, 17, 28}, 0, {400, 1008}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-24, 17, 20}, 0, {400, 1008}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-39, 17, -26}, 0, {803, 752}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-24, 17, 20}, 0, {400, 1008}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{0, 51, -47}, 0, {598, 240}, {0x00, 0x5A, 0xA6, 0xFF}}},
	{{{0, 62, -13}, 0, {496, -16}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{32, 51, -24}, 0, {394, 240}, {0x55, 0x5A, 0xE5, 0xFF}}},
	{{{41, 35, -26}, 0, {394, 496}, {0x77, 0x18, 0xDA, 0xFF}}},
	{{{25, 35, 21}, 0, {189, 496}, {0x49, 0x18, 0x65, 0xFF}}},
	{{{20, 51, 14}, 0, {189, 240}, {0x35, 0x5A, 0x49, 0xFF}}},
	{{{0, 62, -13}, 0, {291, -16}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-20, 51, 14}, 0, {-16, 240}, {0xCB, 0x5A, 0x49, 0xFF}}},
	{{{0, 62, -13}, 0, {86, -16}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-25, 35, 21}, 0, {-16, 496}, {0xB7, 0x18, 0x65, 0xFF}}},
	{{{-24, 17, 20}, 0, {-16, 752}, {0xD8, 0x6B, 0x37, 0xFF}}},
	{{{24, 17, 20}, 0, {189, 752}, {0x28, 0x6B, 0x37, 0xFF}}},
	{{{39, 17, -26}, 0, {394, 752}, {0x77, 0x00, 0xD3, 0xFF}}},
	{{{0, 35, -56}, 0, {598, 496}, {0x00, 0x18, 0x83, 0xFF}}},
	{{{0, 17, -54}, 0, {598, 752}, {0x00, 0xFA, 0x81, 0xFF}}},
	{{{0, 8, -54}, 0, {598, 752}, {0x00, 0xB4, 0x9A, 0xFF}}},
	{{{39, 8, -26}, 0, {394, 752}, {0x5C, 0xB2, 0xD7, 0xFF}}},
	{{{33, 17, 28}, 0, {400, 1008}, {0x5A, 0x53, 0x22, 0xFF}}},
	{{{33, 8, 28}, 0, {400, 1008}, {0x5A, 0xAD, 0x22, 0xFF}}},
	{{{16, 17, 51}, 0, {400, 1008}, {0x2D, 0x4F, 0x59, 0xFF}}},
	{{{16, 8, 51}, 0, {400, 1008}, {0x2D, 0xB1, 0x59, 0xFF}}},
	{{{-16, 8, 51}, 0, {400, 1008}, {0xD3, 0xB1, 0x59, 0xFF}}},
	{{{-16, 8, 51}, 0, {400, 1008}, {0xD3, 0xB1, 0x59, 0xFF}}},
	{{{16, 17, 51}, 0, {400, 1008}, {0x2D, 0x4F, 0x59, 0xFF}}},
	{{{-16, 17, 51}, 0, {400, 1008}, {0xD3, 0x4F, 0x59, 0xFF}}},
	{{{-33, 17, 28}, 0, {400, 1008}, {0xA6, 0x53, 0x22, 0xFF}}},
	{{{-33, 8, 28}, 0, {400, 1008}, {0xA6, 0xAD, 0x22, 0xFF}}},
	{{{-39, 8, -26}, 0, {803, 752}, {0xA4, 0xB2, 0xD7, 0xFF}}},
	{{{-39, 17, -26}, 0, {803, 752}, {0x89, 0x00, 0xD3, 0xFF}}},
	{{{0, 17, -54}, 0, {598, 752}, {0x00, 0xFA, 0x81, 0xFF}}},
	{{{-41, 35, -26}, 0, {803, 496}, {0x89, 0x18, 0xDA, 0xFF}}},
	{{{-25, 35, 21}, 0, {1008, 496}, {0xB7, 0x18, 0x65, 0xFF}}},
	{{{-24, 17, 20}, 0, {1008, 752}, {0xD8, 0x6B, 0x37, 0xFF}}},
	{{{-20, 51, 14}, 0, {1008, 240}, {0xCB, 0x5A, 0x49, 0xFF}}},
	{{{-32, 51, -24}, 0, {803, 240}, {0xAB, 0x5A, 0xE5, 0xFF}}},
	{{{0, 62, -13}, 0, {905, -16}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{0, 35, -56}, 0, {598, 496}, {0x00, 0x18, 0x83, 0xFF}}},
	{{{0, 51, -47}, 0, {598, 240}, {0x00, 0x5A, 0xA6, 0xFF}}},
	{{{0, 62, -13}, 0, {701, -16}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{41, 35, -26}, 0, {394, 496}, {0x77, 0x18, 0xDA, 0xFF}}},
	{{{0, 8, -54}, 0, {598, 752}, {0x00, 0xB4, 0x9A, 0xFF}}},
	{{{-16, 17, 51}, 0, {400, 1008}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{33, 17, 28}, 0, {400, 1008}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-33, 17, 28}, 0, {400, 1008}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{16, 17, 51}, 0, {400, 1008}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-39, 8, -26}, 0, {803, 752}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{0, 8, -54}, 0, {598, 752}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{39, 8, -26}, 0, {394, 752}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-33, 8, 28}, 0, {400, 1008}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{33, 8, 28}, 0, {189, 752}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{33, 8, 28}, 0, {1008, 803}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-16, 8, 51}, 0, {1008, 1008}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-33, 8, 28}, 0, {1008, 1008}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{16, 8, 51}, 0, {1008, 803}, {0x00, 0x81, 0x00, 0xFF}}},
};

Gfx anton_skl_cap_normal_Normal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(anton_skl_cap_normal_Normal_Cap_DL_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 0, 7, 0, 8, 3, 9, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
	gsSP2Triangles(12, 14, 13, 0, 12, 15, 14, 0),
	gsSP2Triangles(12, 16, 15, 0, 14, 15, 17, 0),
	gsSP2Triangles(15, 18, 17, 0, 14, 17, 19, 0),
	gsSP2Triangles(14, 19, 20, 0, 14, 20, 21, 0),
	gsSP2Triangles(13, 14, 21, 0, 13, 21, 22, 0),
	gsSP2Triangles(23, 13, 22, 0, 23, 22, 24, 0),
	gsSP2Triangles(22, 25, 24, 0, 22, 26, 25, 0),
	gsSP2Triangles(26, 22, 27, 0, 26, 27, 28, 0),
	gsSP2Triangles(29, 28, 27, 0, 29, 30, 28, 0),
	gsSP1Triangle(31, 30, 29, 0),
	gsSPVertex(anton_skl_cap_normal_Normal_Cap_DL_mesh_layer_1_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 5, 4, 3, 0),
	gsSP2Triangles(5, 3, 6, 0, 7, 5, 6, 0),
	gsSP2Triangles(8, 7, 6, 0, 9, 8, 6, 0),
	gsSP2Triangles(9, 6, 10, 0, 11, 8, 9, 0),
	gsSP2Triangles(11, 12, 8, 0, 11, 13, 12, 0),
	gsSP2Triangles(12, 14, 8, 0, 12, 15, 14, 0),
	gsSP2Triangles(12, 16, 15, 0, 15, 17, 14, 0),
	gsSP2Triangles(8, 14, 7, 0, 7, 18, 5, 0),
	gsSP2Triangles(19, 20, 21, 0, 19, 22, 20, 0),
	gsSP2Triangles(23, 24, 25, 0, 25, 26, 23, 0),
	gsSP2Triangles(25, 27, 26, 0, 28, 29, 30, 0),
	gsSP1Triangle(28, 31, 29, 0),
	gsSPEndDisplayList(),
};


Gfx mat_anton_skl_cap_normal_Cap__CAP_[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPCopyLightsPlayerPart(CAP),
	gsSPEndDisplayList(),
};

Gfx mat_anton_skl_cap_normal_Metal__METAL_[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_normal_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_normal_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_anton_skl_cap_normal_Metal__METAL_[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_normal_Normal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_anton_skl_cap_normal_Cap__CAP_),
	gsSPDisplayList(anton_skl_cap_normal_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_normal_Normal_Cap_DL_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_anton_skl_cap_normal_Metal__METAL_),
	gsSPDisplayList(anton_skl_cap_normal_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_normal_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

