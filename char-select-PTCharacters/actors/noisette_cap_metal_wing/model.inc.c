Lights1 noisette_cap_metal_wing_Metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 noisette_cap_metal_wing_Wing_Tip_Metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Lights1 noisette_cap_metal_wing_Wing_Base_Metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Gfx noisette_cap_metal_wing_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noisette_cap_metal_wing_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/noisette/Metal_Shade.rgba16.inc.c"
};

Gfx noisette_cap_metal_wing_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noisette_cap_metal_wing_Metal_Light_rgba16_rgba16[] = {
	#include "actors/noisette/Metal_Light.rgba16.inc.c"
};

Gfx noisette_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noisette_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16[] = {
	#include "actors/noisette/custom_mario_metal_wing_tip_shade.rgba16.inc.c"
};

Gfx noisette_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noisette_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16[] = {
	#include "actors/noisette/custom_mario_metal_wing_tip_light.rgba16.inc.c"
};

Gfx noisette_cap_metal_wing_custom_mario_metal_wing_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noisette_cap_metal_wing_custom_mario_metal_wing_shade_rgba16[] = {
	#include "actors/noisette/custom_mario_metal_wing_shade.rgba16.inc.c"
};

Gfx noisette_cap_metal_wing_custom_mario_metal_wing_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 noisette_cap_metal_wing_custom_mario_metal_wing_light_rgba16[] = {
	#include "actors/noisette/custom_mario_metal_wing_light.rgba16.inc.c"
};

Vtx noisette_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0[85] = {
	{{ {90, 0, 33}, 0, {1161, 495}, {107, 189, 15, 255} }},
	{{ {61, 0, 76}, 0, {1528, 236}, {63, 185, 84, 255} }},
	{{ {63, 0, -34}, 0, {291, 486}, {69, 186, 175, 255} }},
	{{ {0, 0, -52}, 0, {-194, 168}, {0, 183, 152, 255} }},
	{{ {0, 0, 99}, 0, {1528, -163}, {0, 192, 109, 255} }},
	{{ {-61, 0, 76}, 0, {994, -459}, {193, 185, 84, 255} }},
	{{ {-63, 0, -34}, 0, {-260, -230}, {187, 186, 175, 255} }},
	{{ {-90, 0, 33}, 0, {373, -529}, {149, 189, 15, 255} }},
	{{ {79, 198, 6}, 0, {202, -252}, {23, 86, 165, 255} }},
	{{ {67, 201, 17}, 0, {202, -252}, {195, 111, 254, 255} }},
	{{ {80, 203, 18}, 0, {202, -252}, {34, 122, 255, 255} }},
	{{ {75, 182, -5}, 0, {202, -252}, {7, 29, 133, 255} }},
	{{ {91, 195, 17}, 0, {145, -52}, {109, 64, 251, 255} }},
	{{ {80, 203, 18}, 0, {145, -52}, {34, 122, 255, 255} }},
	{{ {98, 175, 16}, 0, {145, -52}, {127, 255, 249, 255} }},
	{{ {79, 198, 31}, 0, {202, 179}, {26, 87, 88, 255} }},
	{{ {80, 203, 18}, 0, {202, 179}, {34, 122, 255, 255} }},
	{{ {67, 201, 17}, 0, {202, 179}, {195, 111, 254, 255} }},
	{{ {75, 182, 42}, 0, {202, 179}, {11, 31, 123, 255} }},
	{{ {51, 188, 17}, 0, {202, 179}, {145, 62, 252, 255} }},
	{{ {25, 71, 19}, 0, {202, 179}, {209, 118, 249, 255} }},
	{{ {46, 58, 43}, 0, {202, 179}, {47, 87, 80, 255} }},
	{{ {0, 75, 20}, 0, {345, 426}, {0, 127, 0, 255} }},
	{{ {0, 58, 67}, 0, {345, 426}, {0, 107, 68, 255} }},
	{{ {-46, 58, 43}, 0, {202, 179}, {209, 87, 80, 255} }},
	{{ {-25, 71, 19}, 0, {202, 179}, {47, 118, 249, 255} }},
	{{ {-75, 182, 42}, 0, {202, 179}, {245, 31, 123, 255} }},
	{{ {-51, 188, 17}, 0, {202, 179}, {111, 62, 252, 255} }},
	{{ {-67, 201, 17}, 0, {202, 179}, {61, 111, 254, 255} }},
	{{ {-79, 198, 31}, 0, {202, 179}, {230, 87, 88, 255} }},
	{{ {-80, 203, 18}, 0, {202, 179}, {222, 122, 255, 255} }},
	{{ {-91, 195, 17}, 0, {145, -52}, {147, 64, 251, 255} }},
	{{ {-98, 175, 16}, 0, {145, -52}, {129, 255, 249, 255} }},
	{{ {-79, 198, 31}, 0, {202, 179}, {230, 87, 88, 255} }},
	{{ {-91, 195, 17}, 0, {145, -52}, {147, 64, 251, 255} }},
	{{ {-75, 182, -5}, 0, {202, -252}, {249, 29, 133, 255} }},
	{{ {-79, 198, 6}, 0, {202, -252}, {233, 86, 165, 255} }},
	{{ {-80, 203, 18}, 0, {145, -52}, {222, 122, 255, 255} }},
	{{ {-67, 201, 17}, 0, {202, -252}, {61, 111, 254, 255} }},
	{{ {-80, 203, 18}, 0, {202, -252}, {222, 122, 255, 255} }},
	{{ {-51, 188, 17}, 0, {202, -252}, {111, 62, 252, 255} }},
	{{ {-25, 71, 19}, 0, {202, -252}, {47, 118, 249, 255} }},
	{{ {-46, 58, -3}, 0, {202, -252}, {213, 83, 170, 255} }},
	{{ {0, 75, 20}, 0, {345, -486}, {0, 127, 0, 255} }},
	{{ {0, 58, -26}, 0, {345, -486}, {0, 106, 186, 255} }},
	{{ {46, 58, -3}, 0, {202, -252}, {43, 83, 170, 255} }},
	{{ {25, 71, 19}, 0, {202, -252}, {209, 118, 249, 255} }},
	{{ {75, 182, -5}, 0, {202, -252}, {7, 29, 133, 255} }},
	{{ {51, 188, 17}, 0, {202, -252}, {145, 62, 252, 255} }},
	{{ {67, 201, 17}, 0, {202, -252}, {195, 111, 254, 255} }},
	{{ {64, 58, 18}, 0, {145, -52}, {120, 41, 251, 255} }},
	{{ {81, 39, 17}, 0, {145, -52}, {112, 59, 247, 255} }},
	{{ {46, 58, 43}, 0, {202, 179}, {47, 87, 80, 255} }},
	{{ {75, 182, 42}, 0, {202, 179}, {11, 31, 123, 255} }},
	{{ {98, 175, 16}, 0, {145, -52}, {127, 255, 249, 255} }},
	{{ {79, 198, 31}, 0, {202, 179}, {26, 87, 88, 255} }},
	{{ {-75, 182, 42}, 0, {202, 179}, {245, 31, 123, 255} }},
	{{ {-64, 58, 18}, 0, {145, -52}, {136, 41, 251, 255} }},
	{{ {-81, 39, 17}, 0, {145, -52}, {144, 59, 247, 255} }},
	{{ {-57, 39, -28}, 0, {202, -252}, {187, 63, 170, 255} }},
	{{ {0, 39, -45}, 0, {345, -486}, {0, 57, 142, 255} }},
	{{ {57, 39, -28}, 0, {202, -252}, {69, 63, 170, 255} }},
	{{ {63, 0, -34}, 0, {-184, -286}, {69, 186, 175, 255} }},
	{{ {90, 0, 33}, 0, {-241, -43}, {107, 189, 15, 255} }},
	{{ {90, 0, 33}, 0, {-241, -43}, {107, 189, 15, 255} }},
	{{ {81, 39, 17}, 0, {145, -52}, {112, 59, 247, 255} }},
	{{ {58, 39, 69}, 0, {202, 179}, {70, 65, 84, 255} }},
	{{ {46, 58, 43}, 0, {202, 179}, {47, 87, 80, 255} }},
	{{ {0, 58, 67}, 0, {345, 426}, {0, 107, 68, 255} }},
	{{ {0, 39, 86}, 0, {345, 426}, {0, 63, 110, 255} }},
	{{ {-58, 39, 69}, 0, {202, 179}, {186, 65, 84, 255} }},
	{{ {-46, 58, 43}, 0, {202, 179}, {209, 87, 80, 255} }},
	{{ {-81, 39, 17}, 0, {145, -52}, {144, 59, 247, 255} }},
	{{ {-64, 58, 18}, 0, {145, -52}, {136, 41, 251, 255} }},
	{{ {-75, 182, 42}, 0, {202, 179}, {245, 31, 123, 255} }},
	{{ {-90, 0, 33}, 0, {-241, -43}, {149, 189, 15, 255} }},
	{{ {-61, 0, 76}, 0, {-184, 210}, {193, 185, 84, 255} }},
	{{ {0, 0, 99}, 0, {-41, 484}, {0, 192, 109, 255} }},
	{{ {61, 0, 76}, 0, {-184, 210}, {63, 185, 84, 255} }},
	{{ {-63, 0, -34}, 0, {-184, -286}, {187, 186, 175, 255} }},
	{{ {-57, 39, -28}, 0, {202, -252}, {187, 63, 170, 255} }},
	{{ {0, 0, -52}, 0, {-41, -524}, {0, 183, 152, 255} }},
	{{ {0, 39, -45}, 0, {345, -486}, {0, 57, 142, 255} }},
	{{ {57, 39, -28}, 0, {202, -252}, {69, 63, 170, 255} }},
	{{ {63, 0, -34}, 0, {-184, -286}, {69, 186, 175, 255} }},
};

Gfx noisette_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(noisette_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(3, 5, 6, 0, 5, 7, 6, 0),
	gsSP2Triangles(8, 9, 10, 0, 11, 9, 8, 0),
	gsSP2Triangles(11, 8, 12, 0, 12, 8, 13, 0),
	gsSP2Triangles(11, 12, 14, 0, 14, 12, 15, 0),
	gsSP2Triangles(15, 12, 16, 0, 17, 15, 16, 0),
	gsSP2Triangles(18, 15, 17, 0, 18, 17, 19, 0),
	gsSP2Triangles(20, 18, 19, 0, 20, 21, 18, 0),
	gsSP2Triangles(22, 21, 20, 0, 23, 21, 22, 0),
	gsSP2Triangles(23, 22, 24, 0, 22, 25, 24, 0),
	gsSP2Triangles(25, 26, 24, 0, 25, 27, 26, 0),
	gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
	gsSP2Triangles(28, 30, 29, 0, 29, 30, 31, 0),
	gsSPVertex(noisette_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(3, 2, 4, 0, 2, 5, 4, 0),
	gsSP2Triangles(3, 4, 6, 0, 4, 7, 6, 0),
	gsSP2Triangles(3, 6, 8, 0, 9, 3, 8, 0),
	gsSP2Triangles(9, 10, 3, 0, 10, 9, 11, 0),
	gsSP2Triangles(11, 12, 10, 0, 11, 13, 12, 0),
	gsSP2Triangles(13, 11, 14, 0, 14, 15, 13, 0),
	gsSP2Triangles(14, 16, 15, 0, 15, 16, 17, 0),
	gsSP2Triangles(18, 13, 15, 0, 18, 19, 13, 0),
	gsSP2Triangles(19, 18, 20, 0, 18, 21, 20, 0),
	gsSP2Triangles(18, 22, 21, 0, 18, 15, 22, 0),
	gsSP2Triangles(22, 23, 21, 0, 0, 24, 1, 0),
	gsSP2Triangles(25, 24, 0, 0, 25, 0, 3, 0),
	gsSP2Triangles(25, 3, 10, 0, 25, 10, 26, 0),
	gsSP2Triangles(26, 10, 27, 0, 27, 10, 12, 0),
	gsSP2Triangles(27, 12, 28, 0, 29, 28, 12, 0),
	gsSP2Triangles(29, 12, 13, 0, 19, 29, 13, 0),
	gsSP2Triangles(30, 29, 19, 0, 30, 19, 31, 0),
	gsSPVertex(noisette_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 64, 21, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(2, 3, 4, 0, 2, 4, 5, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 4, 7, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
	gsSP2Triangles(9, 7, 10, 0, 11, 6, 8, 0),
	gsSP2Triangles(11, 12, 6, 0, 12, 5, 6, 0),
	gsSP2Triangles(12, 13, 5, 0, 14, 5, 13, 0),
	gsSP2Triangles(14, 2, 5, 0, 0, 2, 14, 0),
	gsSP2Triangles(15, 11, 8, 0, 15, 8, 16, 0),
	gsSP2Triangles(17, 15, 16, 0, 17, 16, 18, 0),
	gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
	gsSPEndDisplayList(),
};

Vtx noisette_cap_metal_wing_Wings_mesh_layer_4_vtx_0[16] = {
	{{ {147, -27, -42}, 0, {-16, 1978}, {90, 76, 48, 255} }},
	{{ {217, -66, -111}, 0, {974, 1978}, {90, 76, 48, 255} }},
	{{ {163, 85, -250}, 0, {974, -34}, {90, 76, 48, 255} }},
	{{ {94, 124, -181}, 0, {-16, -34}, {90, 76, 48, 255} }},
	{{ {-147, -27, -42}, 0, {-16, 1978}, {90, 180, 208, 255} }},
	{{ {-217, -66, -111}, 0, {974, 1978}, {90, 180, 208, 255} }},
	{{ {-163, 85, -250}, 0, {974, -34}, {90, 180, 208, 255} }},
	{{ {-94, 124, -181}, 0, {-16, -34}, {90, 180, 208, 255} }},
	{{ {147, -26, -25}, 0, {-16, 1978}, {90, 76, 48, 255} }},
	{{ {217, -65, -94}, 0, {974, 1978}, {90, 76, 48, 255} }},
	{{ {163, 86, -233}, 0, {974, -34}, {90, 76, 48, 255} }},
	{{ {94, 125, -164}, 0, {-16, -34}, {90, 76, 48, 255} }},
	{{ {-147, -26, -25}, 0, {-16, 1978}, {90, 180, 208, 255} }},
	{{ {-217, -65, -94}, 0, {974, 1978}, {90, 180, 208, 255} }},
	{{ {-163, 86, -233}, 0, {974, -34}, {90, 180, 208, 255} }},
	{{ {-94, 125, -164}, 0, {-16, -34}, {90, 180, 208, 255} }},
};

Gfx noisette_cap_metal_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(noisette_cap_metal_wing_Wings_mesh_layer_4_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx noisette_cap_metal_wing_Wings_mesh_layer_4_vtx_1[16] = {
	{{ {25, 163, -112}, 0, {-16, -34}, {90, 76, 48, 255} }},
	{{ {78, 12, 27}, 0, {-16, 1978}, {90, 76, 48, 255} }},
	{{ {147, -27, -42}, 0, {974, 1978}, {90, 76, 48, 255} }},
	{{ {94, 124, -181}, 0, {974, -34}, {90, 76, 48, 255} }},
	{{ {-25, 163, -112}, 0, {-16, -34}, {90, 180, 208, 255} }},
	{{ {-147, -27, -42}, 0, {974, 1978}, {90, 180, 208, 255} }},
	{{ {-94, 124, -181}, 0, {974, -34}, {90, 180, 208, 255} }},
	{{ {-78, 12, 27}, 0, {-16, 1978}, {90, 180, 208, 255} }},
	{{ {25, 164, -95}, 0, {-16, -34}, {90, 76, 48, 255} }},
	{{ {78, 13, 44}, 0, {-16, 1978}, {90, 76, 48, 255} }},
	{{ {147, -26, -25}, 0, {974, 1978}, {90, 76, 48, 255} }},
	{{ {94, 125, -164}, 0, {974, -34}, {90, 76, 48, 255} }},
	{{ {-25, 164, -95}, 0, {-16, -34}, {90, 180, 208, 255} }},
	{{ {-147, -26, -25}, 0, {974, 1978}, {90, 180, 208, 255} }},
	{{ {-94, 125, -164}, 0, {974, -34}, {90, 180, 208, 255} }},
	{{ {-78, 13, 44}, 0, {-16, 1978}, {90, 180, 208, 255} }},
};

Gfx noisette_cap_metal_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(noisette_cap_metal_wing_Wings_mesh_layer_4_vtx_1 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSPEndDisplayList(),
};


Gfx mat_noisette_cap_metal_wing_Metal[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noisette_cap_metal_wing_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noisette_cap_metal_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_noisette_cap_metal_wing_Metal[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_noisette_cap_metal_wing_Wing_Tip_Metal[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(noisette_cap_metal_wing_Wing_Tip_Metal_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noisette_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noisette_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_noisette_cap_metal_wing_Wing_Tip_Metal[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_noisette_cap_metal_wing_Wing_Base_Metal[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(noisette_cap_metal_wing_Wing_Base_Metal_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noisette_cap_metal_wing_custom_mario_metal_wing_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, noisette_cap_metal_wing_custom_mario_metal_wing_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_noisette_cap_metal_wing_Wing_Base_Metal[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx noisette_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_noisette_cap_metal_wing_Metal),
	gsSPDisplayList(noisette_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_noisette_cap_metal_wing_Metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx noisette_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_mat_override_Metal_0[] = {
	gsSPDisplayList(mat_noisette_cap_metal_wing_Metal),
	gsSPDisplayList(noisette_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_noisette_cap_metal_wing_Metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx noisette_cap_metal_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_noisette_cap_metal_wing_Wing_Tip_Metal),
	gsSPDisplayList(noisette_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_noisette_cap_metal_wing_Wing_Tip_Metal),
	gsSPDisplayList(mat_noisette_cap_metal_wing_Wing_Base_Metal),
	gsSPDisplayList(noisette_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_noisette_cap_metal_wing_Wing_Base_Metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx noisette_cap_metal_wing_Wings_mesh_layer_4_mat_override_Metal_0[] = {
	gsSPDisplayList(mat_noisette_cap_metal_wing_Metal),
	gsSPDisplayList(noisette_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(noisette_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_noisette_cap_metal_wing_Metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

