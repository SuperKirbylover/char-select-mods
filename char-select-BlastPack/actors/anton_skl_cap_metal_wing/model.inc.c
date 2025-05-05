Lights1 anton_skl_cap_metal_wing_Metal__METAL__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 anton_skl_cap_metal_wing_Metal_Wing_Tip_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 anton_skl_cap_metal_wing_Metal_Wing_Base_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Gfx anton_skl_cap_metal_wing_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_metal_wing_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/anton_skl_cap_metal_wing/Metal_Shade_rgba16.rgba16.inc.c"
};

Gfx anton_skl_cap_metal_wing_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_metal_wing_Metal_Light_rgba16_rgba16[] = {
	#include "actors/anton_skl_cap_metal_wing/Metal_Light_rgba16.rgba16.inc.c"
};

Gfx anton_skl_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16[] = {
	#include "actors/anton_skl_cap_metal_wing/custom_mario_metal_wing_tip_shade.rgba16.inc.c"
};

Gfx anton_skl_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16[] = {
	#include "actors/anton_skl_cap_metal_wing/custom_mario_metal_wing_tip_light.rgba16.inc.c"
};

Gfx anton_skl_cap_metal_wing_custom_mario_metal_wing_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_metal_wing_custom_mario_metal_wing_shade_rgba16[] = {
	#include "actors/anton_skl_cap_metal_wing/custom_mario_metal_wing_shade.rgba16.inc.c"
};

Gfx anton_skl_cap_metal_wing_custom_mario_metal_wing_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_metal_wing_custom_mario_metal_wing_light_rgba16[] = {
	#include "actors/anton_skl_cap_metal_wing/custom_mario_metal_wing_light.rgba16.inc.c"
};

Vtx anton_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0[63] = {
	{{{24, 16, 20}, 0, {572, 495}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{33, 16, 28}, 0, {572, 495}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{39, 16, -26}, 0, {559, 239}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-33, 16, 28}, 0, {572, 495}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{33, 16, 28}, 0, {572, 495}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{24, 16, 20}, 0, {572, 495}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{0, 51, -47}, 0, {968, -272}, {0x00, 0x5A, 0xA6, 0xFF}}},
	{{{0, 62, -13}, 0, {764, -528}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{32, 51, -24}, 0, {559, -272}, {0x55, 0x5A, 0xE5, 0xFF}}},
	{{{41, 35, -26}, 0, {559, -16}, {0x77, 0x18, 0xDA, 0xFF}}},
	{{{25, 35, 21}, 0, {150, -16}, {0x49, 0x18, 0x65, 0xFF}}},
	{{{20, 51, 14}, 0, {150, -272}, {0x35, 0x5A, 0x49, 0xFF}}},
	{{{0, 62, -13}, 0, {354, -528}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-20, 51, 14}, 0, {-260, -272}, {0xCB, 0x5A, 0x49, 0xFF}}},
	{{{0, 62, -13}, 0, {-55, -528}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-25, 35, 21}, 0, {-260, -16}, {0xB7, 0x18, 0x65, 0xFF}}},
	{{{-24, 16, 20}, 0, {-260, 239}, {0xD8, 0x6B, 0x37, 0xFF}}},
	{{{24, 16, 20}, 0, {150, 239}, {0x28, 0x6B, 0x37, 0xFF}}},
	{{{39, 16, -26}, 0, {559, 239}, {0x77, 0x00, 0xD3, 0xFF}}},
	{{{0, 35, -56}, 0, {968, -16}, {0x00, 0x18, 0x83, 0xFF}}},
	{{{0, 16, -54}, 0, {968, 239}, {0x00, 0xFA, 0x81, 0xFF}}},
	{{{0, 8, -54}, 0, {968, 239}, {0x00, 0xB4, 0x9A, 0xFF}}},
	{{{39, 8, -26}, 0, {559, 239}, {0x5C, 0xB2, 0xD7, 0xFF}}},
	{{{33, 16, 28}, 0, {572, 495}, {0x5A, 0x53, 0x22, 0xFF}}},
	{{{33, 8, 28}, 0, {572, 495}, {0x5A, 0xAD, 0x22, 0xFF}}},
	{{{16, 16, 51}, 0, {572, 495}, {0x2D, 0x4F, 0x59, 0xFF}}},
	{{{16, 8, 51}, 0, {572, 495}, {0x2D, 0xB1, 0x59, 0xFF}}},
	{{{-16, 8, 51}, 0, {572, 495}, {0xD3, 0xB1, 0x59, 0xFF}}},
	{{{-16, 16, 51}, 0, {572, 495}, {0xD3, 0x4F, 0x59, 0xFF}}},
	{{{-33, 16, 28}, 0, {572, 495}, {0xA6, 0x53, 0x22, 0xFF}}},
	{{{-33, 8, 28}, 0, {572, 495}, {0xA6, 0xAD, 0x22, 0xFF}}},
	{{{-39, 8, -26}, 0, {1378, 239}, {0xA4, 0xB2, 0xD7, 0xFF}}},
	{{{-39, 8, -26}, 0, {1378, 239}, {0xA4, 0xB2, 0xD7, 0xFF}}},
	{{{-33, 16, 28}, 0, {572, 495}, {0xA6, 0x53, 0x22, 0xFF}}},
	{{{-39, 16, -26}, 0, {1378, 239}, {0x89, 0x00, 0xD3, 0xFF}}},
	{{{0, 16, -54}, 0, {968, 239}, {0x00, 0xFA, 0x81, 0xFF}}},
	{{{-41, 35, -26}, 0, {1378, -16}, {0x89, 0x18, 0xDA, 0xFF}}},
	{{{-25, 35, 21}, 0, {1787, -16}, {0xB7, 0x18, 0x65, 0xFF}}},
	{{{-24, 16, 20}, 0, {1787, 239}, {0xD8, 0x6B, 0x37, 0xFF}}},
	{{{-20, 51, 14}, 0, {1787, -272}, {0xCB, 0x5A, 0x49, 0xFF}}},
	{{{-32, 51, -24}, 0, {1378, -272}, {0xAB, 0x5A, 0xE5, 0xFF}}},
	{{{0, 62, -13}, 0, {1583, -528}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{0, 35, -56}, 0, {968, -16}, {0x00, 0x18, 0x83, 0xFF}}},
	{{{0, 51, -47}, 0, {968, -272}, {0x00, 0x5A, 0xA6, 0xFF}}},
	{{{0, 62, -13}, 0, {1173, -528}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{41, 35, -26}, 0, {559, -16}, {0x77, 0x18, 0xDA, 0xFF}}},
	{{{0, 8, -54}, 0, {968, 239}, {0x00, 0xB4, 0x9A, 0xFF}}},
	{{{-16, 16, 51}, 0, {572, 495}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{33, 16, 28}, 0, {572, 495}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-33, 16, 28}, 0, {572, 495}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{16, 16, 51}, 0, {572, 495}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{24, 16, 20}, 0, {572, 495}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-24, 16, 20}, 0, {572, 495}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-39, 16, -26}, 0, {1378, 239}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-39, 8, -26}, 0, {1378, 239}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{0, 8, -54}, 0, {968, 239}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{39, 8, -26}, 0, {559, 239}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-33, 8, 28}, 0, {572, 495}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{33, 8, 28}, 0, {150, 239}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{33, 8, 28}, 0, {1788, 291}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-16, 8, 51}, 0, {1788, 495}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-33, 8, 28}, 0, {1788, 495}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{16, 8, 51}, 0, {1788, 291}, {0x00, 0x81, 0x00, 0xFF}}},
};

Gfx anton_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(anton_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
	gsSP2Triangles(8, 10, 9, 0, 8, 11, 10, 0),
	gsSP2Triangles(8, 12, 11, 0, 10, 11, 13, 0),
	gsSP2Triangles(11, 14, 13, 0, 10, 13, 15, 0),
	gsSP2Triangles(10, 15, 16, 0, 10, 16, 17, 0),
	gsSP2Triangles(9, 10, 17, 0, 9, 17, 18, 0),
	gsSP2Triangles(19, 9, 18, 0, 19, 18, 20, 0),
	gsSP2Triangles(18, 21, 20, 0, 18, 22, 21, 0),
	gsSP2Triangles(22, 18, 23, 0, 22, 23, 24, 0),
	gsSP2Triangles(25, 24, 23, 0, 25, 26, 24, 0),
	gsSP2Triangles(27, 26, 25, 0, 27, 25, 28, 0),
	gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
	gsSP1Triangle(31, 30, 29, 0),
	gsSPVertex(anton_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 32, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(4, 3, 2, 0, 5, 4, 2, 0),
	gsSP2Triangles(5, 2, 6, 0, 7, 4, 5, 0),
	gsSP2Triangles(7, 8, 4, 0, 7, 9, 8, 0),
	gsSP2Triangles(8, 10, 4, 0, 8, 11, 10, 0),
	gsSP2Triangles(8, 12, 11, 0, 11, 13, 10, 0),
	gsSP2Triangles(4, 10, 3, 0, 3, 14, 0, 0),
	gsSP2Triangles(15, 16, 17, 0, 15, 18, 16, 0),
	gsSP2Triangles(17, 19, 20, 0, 21, 17, 20, 0),
	gsSP2Triangles(22, 23, 24, 0, 24, 25, 22, 0),
	gsSP2Triangles(24, 26, 25, 0, 27, 28, 29, 0),
	gsSP1Triangle(27, 30, 28, 0),
	gsSPEndDisplayList(),
};

Vtx anton_skl_cap_metal_wing_Wings_mesh_layer_4_vtx_0[8] = {
	{{{63, 2, -66}, 0, {-16, 1978}, {0x5A, 0x4C, 0x30, 0xFF}}},
	{{{98, -17, -100}, 0, {974, 1978}, {0x5A, 0x4C, 0x30, 0xFF}}},
	{{{71, 58, -170}, 0, {974, -34}, {0x5A, 0x4C, 0x30, 0xFF}}},
	{{{36, 78, -135}, 0, {-16, -34}, {0x5B, 0x4C, 0x2F, 0xFF}}},
	{{{-63, 2, -66}, 0, {-16, 1978}, {0x5A, 0xB4, 0xD0, 0xFF}}},
	{{{-98, -17, -100}, 0, {974, 1978}, {0x5A, 0xB4, 0xD0, 0xFF}}},
	{{{-71, 58, -170}, 0, {974, -34}, {0x5A, 0xB4, 0xD0, 0xFF}}},
	{{{-36, 78, -135}, 0, {-16, -34}, {0x5B, 0xB4, 0xD1, 0xFF}}},
};

Gfx anton_skl_cap_metal_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(anton_skl_cap_metal_wing_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx anton_skl_cap_metal_wing_Wings_mesh_layer_4_vtx_1[8] = {
	{{{2, 97, -101}, 0, {-16, -34}, {0x5B, 0x4C, 0x2F, 0xFF}}},
	{{{63, 2, -66}, 0, {974, 1978}, {0x5A, 0x4C, 0x30, 0xFF}}},
	{{{36, 78, -135}, 0, {974, -34}, {0x5B, 0x4C, 0x2F, 0xFF}}},
	{{{28, 22, -31}, 0, {-16, 1978}, {0x5B, 0x4C, 0x2F, 0xFF}}},
	{{{-2, 97, -101}, 0, {-16, -34}, {0x5B, 0xB4, 0xD1, 0xFF}}},
	{{{-63, 2, -66}, 0, {974, 1978}, {0x5A, 0xB4, 0xD0, 0xFF}}},
	{{{-36, 78, -135}, 0, {974, -34}, {0x5B, 0xB4, 0xD1, 0xFF}}},
	{{{-28, 22, -31}, 0, {-16, 1978}, {0x5B, 0xB4, 0xD1, 0xFF}}},
};

Gfx anton_skl_cap_metal_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(anton_skl_cap_metal_wing_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_anton_skl_cap_metal_wing_Metal__METAL_[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_metal_wing_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_metal_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_anton_skl_cap_metal_wing_Metal__METAL_[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsSPEndDisplayList(),
};

Gfx mat_anton_skl_cap_metal_wing_Metal_Wing_Tip[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(anton_skl_cap_metal_wing_Metal_Wing_Tip_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_anton_skl_cap_metal_wing_Metal_Wing_Tip[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx mat_anton_skl_cap_metal_wing_Metal_Wing_Base[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(anton_skl_cap_metal_wing_Metal_Wing_Base_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_metal_wing_custom_mario_metal_wing_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_metal_wing_custom_mario_metal_wing_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_anton_skl_cap_metal_wing_Metal_Wing_Base[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_anton_skl_cap_metal_wing_Metal__METAL_),
	gsSPDisplayList(anton_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_anton_skl_cap_metal_wing_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_anton_skl_cap_metal_wing_Metal__METAL_),
	gsSPDisplayList(anton_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_anton_skl_cap_metal_wing_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_metal_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_anton_skl_cap_metal_wing_Metal_Wing_Tip),
	gsSPDisplayList(anton_skl_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_anton_skl_cap_metal_wing_Metal_Wing_Tip),
	gsSPDisplayList(mat_anton_skl_cap_metal_wing_Metal_Wing_Base),
	gsSPDisplayList(anton_skl_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_anton_skl_cap_metal_wing_Metal_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_metal_wing_Wings_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_anton_skl_cap_metal_wing_Metal_Wing_Tip),
	gsSPDisplayList(anton_skl_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_anton_skl_cap_metal_wing_Metal_Wing_Tip),
	gsSPDisplayList(mat_anton_skl_cap_metal_wing_Metal_Wing_Base),
	gsSPDisplayList(anton_skl_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_anton_skl_cap_metal_wing_Metal_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_metal_wing_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

