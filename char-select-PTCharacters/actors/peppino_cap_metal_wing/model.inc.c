Lights1 peppino_cap_metal_wing_metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 peppino_cap_metal_wing_Wing_Tip_Metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Lights1 peppino_cap_metal_wing_Wing_Base_Metal_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Gfx peppino_cap_metal_wing_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 peppino_cap_metal_wing_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/peppino/Metal_Shade.rgba16.inc.c"
};

Gfx peppino_cap_metal_wing_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 peppino_cap_metal_wing_Metal_Light_rgba16_rgba16[] = {
	#include "actors/peppino/Metal_Light.rgba16.inc.c"
};

Gfx peppino_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 peppino_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16[] = {
	#include "actors/peppino/custom_mario_metal_wing_tip_shade.rgba16.inc.c"
};

Gfx peppino_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 peppino_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16[] = {
	#include "actors/peppino/custom_mario_metal_wing_tip_light.rgba16.inc.c"
};

Gfx peppino_cap_metal_wing_custom_mario_metal_wing_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 peppino_cap_metal_wing_custom_mario_metal_wing_shade_rgba16[] = {
	#include "actors/peppino/custom_mario_metal_wing_shade.rgba16.inc.c"
};

Gfx peppino_cap_metal_wing_custom_mario_metal_wing_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 peppino_cap_metal_wing_custom_mario_metal_wing_light_rgba16[] = {
	#include "actors/peppino/custom_mario_metal_wing_light.rgba16.inc.c"
};

Vtx peppino_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0[63] = {
	{{ {70, 39, -62}, 0, {755, -191}, {70, 171, 194, 255} }},
	{{ {69, 0, -60}, 0, {1036, -191}, {75, 175, 193, 255} }},
	{{ {0, 0, -92}, 0, {917, -517}, {0, 174, 159, 255} }},
	{{ {86, 39, 3}, 0, {785, 32}, {94, 172, 10, 255} }},
	{{ {125, 51, 3}, 0, {568, 32}, {82, 159, 7, 255} }},
	{{ {93, 51, -81}, 0, {536, -191}, {63, 163, 196, 255} }},
	{{ {0, 51, -120}, 0, {393, -517}, {0, 164, 168, 255} }},
	{{ {0, 39, -93}, 0, {626, -517}, {0, 176, 158, 255} }},
	{{ {-70, 39, -62}, 0, {755, -191}, {186, 171, 194, 255} }},
	{{ {-69, 0, -60}, 0, {1036, -191}, {181, 175, 193, 255} }},
	{{ {-86, 0, 3}, 0, {1059, 32}, {158, 175, 7, 255} }},
	{{ {86, 0, 3}, 0, {1059, 32}, {98, 175, 7, 255} }},
	{{ {59, 39, 61}, 0, {697, 238}, {70, 178, 72, 255} }},
	{{ {79, 51, 87}, 0, {470, 238}, {53, 155, 56, 255} }},
	{{ {138, 70, 4}, 0, {402, 33}, {124, 25, 7, 255} }},
	{{ {101, 70, -91}, 0, {392, -188}, {90, 23, 170, 255} }},
	{{ {0, 70, -132}, 0, {183, -507}, {0, 16, 130, 255} }},
	{{ {-101, 70, -91}, 0, {392, -188}, {166, 23, 170, 255} }},
	{{ {-93, 51, -81}, 0, {536, -191}, {193, 163, 196, 255} }},
	{{ {-125, 51, 3}, 0, {568, 32}, {174, 159, 7, 255} }},
	{{ {-86, 39, 3}, 0, {785, 32}, {162, 172, 10, 255} }},
	{{ {-59, 39, 61}, 0, {697, 238}, {186, 178, 72, 255} }},
	{{ {-64, 0, 63}, 0, {999, 238}, {182, 183, 73, 255} }},
	{{ {0, 0, 86}, 0, {842, 484}, {0, 177, 99, 255} }},
	{{ {64, 0, 63}, 0, {999, 238}, {74, 183, 73, 255} }},
	{{ {0, 39, 85}, 0, {592, 484}, {0, 176, 99, 255} }},
	{{ {0, 51, 114}, 0, {345, 484}, {0, 156, 78, 255} }},
	{{ {87, 70, 102}, 0, {300, 222}, {81, 16, 97, 255} }},
	{{ {110, 86, 3}, 0, {249, 28}, {42, 120, 2, 255} }},
	{{ {79, 86, -80}, 0, {228, -177}, {32, 117, 218, 255} }},
	{{ {0, 86, -114}, 0, {-50, -461}, {0, 114, 200, 255} }},
	{{ {-79, 86, -80}, 0, {228, -177}, {224, 117, 218, 255} }},
	{{ {-101, 70, -91}, 0, {392, -188}, {166, 23, 170, 255} }},
	{{ {-110, 86, 3}, 0, {249, 28}, {214, 120, 2, 255} }},
	{{ {-79, 86, -80}, 0, {228, -177}, {224, 117, 218, 255} }},
	{{ {-138, 70, 4}, 0, {402, 33}, {132, 25, 7, 255} }},
	{{ {-93, 51, -81}, 0, {536, -191}, {193, 163, 196, 255} }},
	{{ {-125, 51, 3}, 0, {568, 32}, {174, 159, 7, 255} }},
	{{ {-79, 51, 87}, 0, {470, 238}, {203, 155, 56, 255} }},
	{{ {-86, 39, 3}, 0, {785, 32}, {162, 172, 10, 255} }},
	{{ {-59, 39, 61}, 0, {697, 238}, {186, 178, 72, 255} }},
	{{ {0, 39, 85}, 0, {592, 484}, {0, 176, 99, 255} }},
	{{ {0, 0, 86}, 0, {842, 484}, {0, 177, 99, 255} }},
	{{ {-64, 0, 63}, 0, {999, 238}, {182, 183, 73, 255} }},
	{{ {0, 51, 114}, 0, {345, 484}, {0, 156, 78, 255} }},
	{{ {-87, 70, 102}, 0, {300, 222}, {175, 16, 97, 255} }},
	{{ {0, 70, 131}, 0, {112, 473}, {0, 12, 126, 255} }},
	{{ {87, 70, 102}, 0, {300, 222}, {81, 16, 97, 255} }},
	{{ {69, 86, 84}, 0, {156, 203}, {29, 119, 34, 255} }},
	{{ {110, 86, 3}, 0, {249, 28}, {42, 120, 2, 255} }},
	{{ {67, 88, 3}, 0, {59, 14}, {255, 127, 0, 255} }},
	{{ {49, 88, -50}, 0, {18, -150}, {0, 127, 0, 255} }},
	{{ {79, 86, -80}, 0, {228, -177}, {32, 117, 218, 255} }},
	{{ {0, 88, -70}, 0, {-224, -320}, {0, 127, 0, 255} }},
	{{ {0, 86, -114}, 0, {-50, -461}, {0, 114, 200, 255} }},
	{{ {-49, 88, -50}, 0, {18, -150}, {0, 127, 0, 255} }},
	{{ {-67, 88, 3}, 0, {59, 14}, {1, 127, 0, 255} }},
	{{ {-69, 86, 84}, 0, {156, 203}, {227, 119, 34, 255} }},
	{{ {0, 86, 110}, 0, {-110, 414}, {0, 116, 52, 255} }},
	{{ {0, 88, 66}, 0, {-224, 275}, {0, 127, 255, 255} }},
	{{ {43, 88, 50}, 0, {-24, 147}, {0, 127, 255, 255} }},
	{{ {0, 82, -2}, 0, {-224, -17}, {0, 127, 0, 255} }},
	{{ {-43, 88, 50}, 0, {-24, 147}, {0, 127, 255, 255} }},
};

Gfx peppino_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(peppino_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(6, 5, 0, 0, 6, 0, 7, 0),
	gsSP2Triangles(0, 2, 7, 0, 8, 7, 2, 0),
	gsSP2Triangles(8, 2, 9, 0, 10, 9, 2, 0),
	gsSP2Triangles(2, 11, 10, 0, 2, 1, 11, 0),
	gsSP2Triangles(1, 3, 11, 0, 11, 3, 12, 0),
	gsSP2Triangles(3, 13, 12, 0, 3, 4, 13, 0),
	gsSP2Triangles(14, 13, 4, 0, 5, 14, 4, 0),
	gsSP2Triangles(5, 15, 14, 0, 15, 5, 6, 0),
	gsSP2Triangles(15, 6, 16, 0, 17, 16, 6, 0),
	gsSP2Triangles(17, 6, 18, 0, 6, 8, 18, 0),
	gsSP2Triangles(6, 7, 8, 0, 8, 19, 18, 0),
	gsSP2Triangles(8, 20, 19, 0, 9, 20, 8, 0),
	gsSP2Triangles(9, 10, 20, 0, 10, 21, 20, 0),
	gsSP2Triangles(10, 22, 21, 0, 23, 22, 10, 0),
	gsSP2Triangles(11, 23, 10, 0, 11, 24, 23, 0),
	gsSP2Triangles(11, 12, 24, 0, 12, 23, 24, 0),
	gsSP2Triangles(12, 25, 23, 0, 13, 25, 12, 0),
	gsSP2Triangles(13, 26, 25, 0, 27, 26, 13, 0),
	gsSP2Triangles(14, 27, 13, 0, 28, 27, 14, 0),
	gsSP2Triangles(15, 28, 14, 0, 15, 29, 28, 0),
	gsSP2Triangles(29, 15, 16, 0, 29, 16, 30, 0),
	gsSP2Triangles(31, 30, 16, 0, 31, 16, 17, 0),
	gsSPVertex(peppino_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 32, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 8, 6, 0, 6, 8, 9, 0),
	gsSP2Triangles(8, 10, 9, 0, 8, 11, 10, 0),
	gsSP2Triangles(6, 9, 12, 0, 13, 6, 12, 0),
	gsSP2Triangles(13, 12, 14, 0, 15, 14, 12, 0),
	gsSP2Triangles(16, 14, 15, 0, 17, 16, 15, 0),
	gsSP2Triangles(18, 16, 17, 0, 17, 19, 18, 0),
	gsSP2Triangles(17, 20, 19, 0, 20, 21, 19, 0),
	gsSP2Triangles(20, 22, 21, 0, 2, 21, 22, 0),
	gsSP2Triangles(2, 23, 21, 0, 1, 23, 2, 0),
	gsSP2Triangles(1, 24, 23, 0, 24, 1, 25, 0),
	gsSP2Triangles(1, 13, 25, 0, 1, 3, 13, 0),
	gsSP2Triangles(3, 6, 13, 0, 25, 13, 14, 0),
	gsSP2Triangles(25, 14, 26, 0, 16, 26, 14, 0),
	gsSP2Triangles(16, 27, 26, 0, 16, 28, 27, 0),
	gsSP2Triangles(18, 28, 16, 0, 18, 29, 28, 0),
	gsSP2Triangles(18, 19, 29, 0, 19, 21, 29, 0),
	gsSP2Triangles(23, 29, 21, 0, 24, 29, 23, 0),
	gsSP2Triangles(24, 30, 29, 0, 24, 25, 30, 0),
	gsSP2Triangles(25, 27, 30, 0, 25, 26, 27, 0),
	gsSP2Triangles(30, 27, 29, 0, 28, 29, 27, 0),
	gsSPEndDisplayList(),
};

Vtx peppino_cap_metal_wing_Wings_mesh_layer_4_vtx_0[8] = {
	{{ {126, -24, -61}, 0, {-16, 1978}, {90, 76, 48, 255} }},
	{{ {196, -63, -130}, 0, {974, 1978}, {90, 76, 48, 255} }},
	{{ {142, 88, -269}, 0, {974, -34}, {90, 76, 48, 255} }},
	{{ {73, 127, -200}, 0, {-16, -34}, {90, 76, 48, 255} }},
	{{ {-126, -24, -61}, 0, {-16, 1978}, {90, 180, 208, 255} }},
	{{ {-196, -63, -130}, 0, {974, 1978}, {90, 180, 208, 255} }},
	{{ {-142, 88, -269}, 0, {974, -34}, {90, 180, 208, 255} }},
	{{ {-73, 127, -200}, 0, {-16, -34}, {90, 180, 208, 255} }},
};

Gfx peppino_cap_metal_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(peppino_cap_metal_wing_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx peppino_cap_metal_wing_Wings_mesh_layer_4_vtx_1[8] = {
	{{ {4, 166, -131}, 0, {-16, -34}, {90, 76, 48, 255} }},
	{{ {57, 15, 8}, 0, {-16, 1978}, {90, 76, 48, 255} }},
	{{ {126, -24, -61}, 0, {974, 1978}, {90, 76, 48, 255} }},
	{{ {73, 127, -200}, 0, {974, -34}, {90, 76, 48, 255} }},
	{{ {-4, 166, -131}, 0, {-16, -34}, {90, 180, 208, 255} }},
	{{ {-126, -24, -61}, 0, {974, 1978}, {90, 180, 208, 255} }},
	{{ {-73, 127, -200}, 0, {974, -34}, {90, 180, 208, 255} }},
	{{ {-57, 15, 8}, 0, {-16, 1978}, {90, 180, 208, 255} }},
};

Gfx peppino_cap_metal_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(peppino_cap_metal_wing_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_peppino_cap_metal_wing_metal[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, peppino_cap_metal_wing_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, peppino_cap_metal_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_peppino_cap_metal_wing_metal[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_peppino_cap_metal_wing_Wing_Tip_Metal[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(peppino_cap_metal_wing_Wing_Tip_Metal_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, peppino_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, peppino_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_peppino_cap_metal_wing_Wing_Tip_Metal[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_peppino_cap_metal_wing_Wing_Base_Metal[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(peppino_cap_metal_wing_Wing_Base_Metal_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, peppino_cap_metal_wing_custom_mario_metal_wing_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, peppino_cap_metal_wing_custom_mario_metal_wing_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_peppino_cap_metal_wing_Wing_Base_Metal[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx peppino_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_peppino_cap_metal_wing_metal),
	gsSPDisplayList(peppino_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_peppino_cap_metal_wing_metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx peppino_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_mat_override_metal_0[] = {
	gsSPDisplayList(mat_peppino_cap_metal_wing_metal),
	gsSPDisplayList(peppino_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_peppino_cap_metal_wing_metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx peppino_cap_metal_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_peppino_cap_metal_wing_Wing_Tip_Metal),
	gsSPDisplayList(peppino_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_peppino_cap_metal_wing_Wing_Tip_Metal),
	gsSPDisplayList(mat_peppino_cap_metal_wing_Wing_Base_Metal),
	gsSPDisplayList(peppino_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_peppino_cap_metal_wing_Wing_Base_Metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx peppino_cap_metal_wing_Wings_mesh_layer_4_mat_override_metal_0[] = {
	gsSPDisplayList(mat_peppino_cap_metal_wing_metal),
	gsSPDisplayList(peppino_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(peppino_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_peppino_cap_metal_wing_metal),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

