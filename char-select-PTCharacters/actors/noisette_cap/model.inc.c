Lights1 noisette_cap_CAP_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 noisette_cap_UNDERCAP_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 noisette_cap_Metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx noisette_cap_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noisette_cap_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/noisette/Metal_Shade.rgba16.inc.c"
};

Gfx noisette_cap_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noisette_cap_Metal_Light_rgba16_rgba16[] = {
	#include "actors/noisette/Metal_Light.rgba16.inc.c"
};

Vtx noisette_cap_Normal_Cap_DL_mesh_layer_1_vtx_0[79] = {
	{{ {79, 198, 6}, 0, {215, 260}, {23, 86, 165, 255} }},
	{{ {67, 201, 17}, 0, {215, 260}, {195, 111, 254, 255} }},
	{{ {80, 203, 18}, 0, {215, 260}, {34, 122, 255, 255} }},
	{{ {75, 182, -5}, 0, {215, 260}, {7, 29, 133, 255} }},
	{{ {91, 195, 17}, 0, {187, 461}, {109, 64, 251, 255} }},
	{{ {80, 203, 18}, 0, {187, 461}, {34, 122, 255, 255} }},
	{{ {98, 175, 16}, 0, {187, 461}, {127, 255, 249, 255} }},
	{{ {79, 198, 31}, 0, {215, 692}, {26, 87, 88, 255} }},
	{{ {80, 203, 18}, 0, {215, 692}, {34, 122, 255, 255} }},
	{{ {67, 201, 17}, 0, {215, 692}, {195, 111, 254, 255} }},
	{{ {75, 182, 42}, 0, {215, 692}, {11, 31, 123, 255} }},
	{{ {51, 188, 17}, 0, {215, 692}, {145, 62, 252, 255} }},
	{{ {25, 71, 19}, 0, {215, 692}, {209, 118, 249, 255} }},
	{{ {46, 58, 43}, 0, {215, 692}, {47, 87, 80, 255} }},
	{{ {0, 75, 20}, 0, {287, 938}, {0, 127, 0, 255} }},
	{{ {0, 58, 67}, 0, {287, 938}, {0, 107, 68, 255} }},
	{{ {-46, 58, 43}, 0, {215, 692}, {209, 87, 80, 255} }},
	{{ {-25, 71, 19}, 0, {215, 692}, {47, 118, 249, 255} }},
	{{ {-75, 182, 42}, 0, {215, 692}, {245, 31, 123, 255} }},
	{{ {-51, 188, 17}, 0, {215, 692}, {111, 62, 252, 255} }},
	{{ {-67, 201, 17}, 0, {215, 692}, {61, 111, 254, 255} }},
	{{ {-79, 198, 31}, 0, {215, 692}, {230, 87, 88, 255} }},
	{{ {-80, 203, 18}, 0, {215, 692}, {222, 122, 255, 255} }},
	{{ {-91, 195, 17}, 0, {187, 461}, {147, 64, 251, 255} }},
	{{ {-98, 175, 16}, 0, {187, 461}, {129, 255, 249, 255} }},
	{{ {-75, 182, -5}, 0, {215, 260}, {249, 29, 133, 255} }},
	{{ {-79, 198, 6}, 0, {215, 260}, {233, 86, 165, 255} }},
	{{ {-80, 203, 18}, 0, {187, 461}, {222, 122, 255, 255} }},
	{{ {-67, 201, 17}, 0, {215, 260}, {61, 111, 254, 255} }},
	{{ {-80, 203, 18}, 0, {215, 260}, {222, 122, 255, 255} }},
	{{ {-51, 188, 17}, 0, {215, 260}, {111, 62, 252, 255} }},
	{{ {-25, 71, 19}, 0, {215, 260}, {47, 118, 249, 255} }},
	{{ {-25, 71, 19}, 0, {215, 260}, {47, 118, 249, 255} }},
	{{ {-46, 58, -3}, 0, {215, 260}, {213, 83, 170, 255} }},
	{{ {-75, 182, -5}, 0, {215, 260}, {249, 29, 133, 255} }},
	{{ {0, 75, 20}, 0, {287, 27}, {0, 127, 0, 255} }},
	{{ {0, 58, -26}, 0, {287, 27}, {0, 106, 186, 255} }},
	{{ {46, 58, -3}, 0, {215, 260}, {43, 83, 170, 255} }},
	{{ {25, 71, 19}, 0, {215, 260}, {209, 118, 249, 255} }},
	{{ {75, 182, -5}, 0, {215, 260}, {7, 29, 133, 255} }},
	{{ {51, 188, 17}, 0, {215, 260}, {145, 62, 252, 255} }},
	{{ {67, 201, 17}, 0, {215, 260}, {195, 111, 254, 255} }},
	{{ {64, 58, 18}, 0, {187, 461}, {120, 41, 251, 255} }},
	{{ {81, 39, 17}, 0, {187, 461}, {112, 59, 247, 255} }},
	{{ {46, 58, 43}, 0, {215, 692}, {47, 87, 80, 255} }},
	{{ {75, 182, 42}, 0, {215, 692}, {11, 31, 123, 255} }},
	{{ {98, 175, 16}, 0, {187, 461}, {127, 255, 249, 255} }},
	{{ {79, 198, 31}, 0, {215, 692}, {26, 87, 88, 255} }},
	{{ {-98, 175, 16}, 0, {187, 461}, {129, 255, 249, 255} }},
	{{ {-75, 182, 42}, 0, {215, 692}, {245, 31, 123, 255} }},
	{{ {-79, 198, 31}, 0, {215, 692}, {230, 87, 88, 255} }},
	{{ {-64, 58, 18}, 0, {187, 461}, {136, 41, 251, 255} }},
	{{ {-81, 39, 17}, 0, {187, 461}, {144, 59, 247, 255} }},
	{{ {-57, 39, -28}, 0, {215, 260}, {187, 63, 170, 255} }},
	{{ {0, 39, -45}, 0, {287, 27}, {0, 57, 142, 255} }},
	{{ {57, 39, -28}, 0, {215, 260}, {69, 63, 170, 255} }},
	{{ {63, 0, -34}, 0, {22, 227}, {69, 186, 175, 255} }},
	{{ {90, 0, 33}, 0, {-7, 469}, {107, 189, 15, 255} }},
	{{ {58, 39, 69}, 0, {215, 692}, {70, 65, 84, 255} }},
	{{ {0, 58, 67}, 0, {287, 938}, {0, 107, 68, 255} }},
	{{ {0, 39, 86}, 0, {287, 938}, {0, 63, 110, 255} }},
	{{ {-58, 39, 69}, 0, {215, 692}, {186, 65, 84, 255} }},
	{{ {-46, 58, 43}, 0, {215, 692}, {209, 87, 80, 255} }},
	{{ {-90, 0, 33}, 0, {-7, 469}, {149, 189, 15, 255} }},
	{{ {-90, 0, 33}, 0, {-7, 469}, {149, 189, 15, 255} }},
	{{ {-61, 0, 76}, 0, {22, 723}, {193, 185, 84, 255} }},
	{{ {-58, 39, 69}, 0, {215, 692}, {186, 65, 84, 255} }},
	{{ {0, 39, 86}, 0, {287, 938}, {0, 63, 110, 255} }},
	{{ {0, 0, 99}, 0, {93, 996}, {0, 192, 109, 255} }},
	{{ {61, 0, 76}, 0, {22, 723}, {63, 185, 84, 255} }},
	{{ {58, 39, 69}, 0, {215, 692}, {70, 65, 84, 255} }},
	{{ {90, 0, 33}, 0, {-7, 469}, {107, 189, 15, 255} }},
	{{ {-63, 0, -34}, 0, {22, 227}, {187, 186, 175, 255} }},
	{{ {-81, 39, 17}, 0, {187, 461}, {144, 59, 247, 255} }},
	{{ {-57, 39, -28}, 0, {215, 260}, {187, 63, 170, 255} }},
	{{ {0, 0, -52}, 0, {93, -11}, {0, 183, 152, 255} }},
	{{ {0, 39, -45}, 0, {287, 27}, {0, 57, 142, 255} }},
	{{ {57, 39, -28}, 0, {215, 260}, {69, 63, 170, 255} }},
	{{ {63, 0, -34}, 0, {22, 227}, {69, 186, 175, 255} }},
};

Gfx noisette_cap_Normal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(noisette_cap_Normal_Cap_DL_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 0, 4, 0, 4, 0, 5, 0),
	gsSP2Triangles(3, 4, 6, 0, 6, 4, 7, 0),
	gsSP2Triangles(7, 4, 8, 0, 9, 7, 8, 0),
	gsSP2Triangles(10, 7, 9, 0, 10, 9, 11, 0),
	gsSP2Triangles(12, 10, 11, 0, 12, 13, 10, 0),
	gsSP2Triangles(14, 13, 12, 0, 15, 13, 14, 0),
	gsSP2Triangles(15, 14, 16, 0, 14, 17, 16, 0),
	gsSP2Triangles(17, 18, 16, 0, 17, 19, 18, 0),
	gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
	gsSP2Triangles(20, 22, 21, 0, 21, 22, 23, 0),
	gsSP2Triangles(24, 21, 23, 0, 25, 24, 23, 0),
	gsSP2Triangles(25, 23, 26, 0, 23, 27, 26, 0),
	gsSP2Triangles(25, 26, 28, 0, 26, 29, 28, 0),
	gsSP2Triangles(25, 28, 30, 0, 31, 25, 30, 0),
	gsSPVertex(noisette_cap_Normal_Cap_DL_mesh_layer_1_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
	gsSP2Triangles(5, 3, 6, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 8, 7, 0, 7, 8, 9, 0),
	gsSP2Triangles(10, 5, 7, 0, 10, 11, 5, 0),
	gsSP2Triangles(11, 10, 12, 0, 10, 13, 12, 0),
	gsSP2Triangles(10, 14, 13, 0, 10, 7, 14, 0),
	gsSP2Triangles(14, 15, 13, 0, 16, 17, 18, 0),
	gsSP2Triangles(19, 17, 16, 0, 19, 16, 2, 0),
	gsSP2Triangles(19, 2, 1, 0, 19, 1, 20, 0),
	gsSP2Triangles(20, 1, 21, 0, 21, 1, 4, 0),
	gsSP2Triangles(21, 4, 22, 0, 23, 22, 4, 0),
	gsSP2Triangles(23, 4, 5, 0, 11, 23, 5, 0),
	gsSP2Triangles(24, 23, 11, 0, 24, 11, 25, 0),
	gsSP2Triangles(25, 11, 26, 0, 11, 12, 26, 0),
	gsSP2Triangles(26, 12, 27, 0, 26, 27, 28, 0),
	gsSP2Triangles(29, 28, 27, 0, 29, 27, 30, 0),
	gsSP2Triangles(20, 29, 30, 0, 20, 30, 19, 0),
	gsSP2Triangles(19, 30, 17, 0, 31, 29, 20, 0),
	gsSPVertex(noisette_cap_Normal_Cap_DL_mesh_layer_1_vtx_0 + 64, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 5, 3, 4, 0),
	gsSP2Triangles(5, 6, 3, 0, 7, 6, 5, 0),
	gsSP2Triangles(8, 0, 9, 0, 8, 9, 10, 0),
	gsSP2Triangles(11, 8, 10, 0, 11, 10, 12, 0),
	gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
	gsSPEndDisplayList(),
};

Vtx noisette_cap_Normal_Cap_DL_mesh_layer_1_vtx_1[8] = {
	{{ {90, 0, 33}, 0, {694, 1008}, {107, 189, 15, 255} }},
	{{ {61, 0, 76}, 0, {878, 748}, {63, 185, 84, 255} }},
	{{ {63, 0, -34}, 0, {259, 999}, {69, 186, 175, 255} }},
	{{ {0, 0, -52}, 0, {17, 681}, {0, 183, 152, 255} }},
	{{ {0, 0, 99}, 0, {878, 350}, {0, 192, 109, 255} }},
	{{ {-61, 0, 76}, 0, {611, 54}, {193, 185, 84, 255} }},
	{{ {-63, 0, -34}, 0, {-16, 283}, {187, 186, 175, 255} }},
	{{ {-90, 0, 33}, 0, {301, -16}, {149, 189, 15, 255} }},
};

Gfx noisette_cap_Normal_Cap_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(noisette_cap_Normal_Cap_DL_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(3, 5, 6, 0, 5, 7, 6, 0),
	gsSPEndDisplayList(),
};


Gfx mat_noisette_cap_CAP[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_noisette_cap_UNDERCAP[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT, SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 115, 115, 115, 255),
	gsSPEndDisplayList(),
};

Gfx mat_noisette_cap_Metal[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noisette_cap_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noisette_cap_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_noisette_cap_Metal[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx noisette_cap_Normal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_noisette_cap_CAP),
	gsSPDisplayList(noisette_cap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_noisette_cap_UNDERCAP),
	gsSPDisplayList(noisette_cap_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx noisette_cap_Normal_Cap_DL_mesh_layer_1_mat_override_Metal_0[] = {
	gsSPDisplayList(mat_noisette_cap_Metal),
	gsSPDisplayList(noisette_cap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(noisette_cap_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_noisette_cap_Metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

