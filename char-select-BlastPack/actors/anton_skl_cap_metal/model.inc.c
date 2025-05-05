Lights1 anton_skl_cap_metal_Metal__METAL__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Gfx anton_skl_cap_metal_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_metal_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/anton_skl/Metal_Shade.rgba16.inc.c"
};

Gfx anton_skl_cap_metal_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 anton_skl_cap_metal_Metal_Light_rgba16_rgba16[] = {
	#include "actors/anton_skl/Metal_Light.rgba16.inc.c"
};

Vtx anton_skl_cap_metal_Metal_Cap_DL_mesh_layer_1_vtx_0[60] = {
	{{ {0, 51, -47}, 0, {968, -272}, {0, 90, 166, 255} }},
	{{ {0, 62, -13}, 0, {764, -528}, {0, 127, 0, 255} }},
	{{ {32, 51, -24}, 0, {559, -272}, {85, 90, 228, 255} }},
	{{ {41, 35, -26}, 0, {559, -16}, {119, 24, 217, 255} }},
	{{ {25, 35, 21}, 0, {150, -16}, {73, 24, 101, 255} }},
	{{ {20, 51, 14}, 0, {150, -272}, {53, 90, 73, 255} }},
	{{ {0, 62, -13}, 0, {354, -528}, {0, 127, 0, 255} }},
	{{ {-20, 51, 14}, 0, {-260, -272}, {203, 90, 73, 255} }},
	{{ {0, 62, -13}, 0, {-55, -528}, {0, 127, 0, 255} }},
	{{ {-25, 35, 21}, 0, {-260, -16}, {183, 24, 101, 255} }},
	{{ {-24, 17, 20}, 0, {-260, 239}, {216, 107, 55, 255} }},
	{{ {24, 17, 20}, 0, {150, 239}, {40, 107, 55, 255} }},
	{{ {39, 17, -26}, 0, {559, 239}, {119, 255, 210, 255} }},
	{{ {0, 35, -56}, 0, {968, -16}, {0, 24, 131, 255} }},
	{{ {0, 17, -54}, 0, {968, 239}, {0, 250, 129, 255} }},
	{{ {0, 8, -54}, 0, {968, 239}, {0, 180, 154, 255} }},
	{{ {39, 8, -26}, 0, {559, 239}, {92, 179, 215, 255} }},
	{{ {33, 17, 28}, 0, {572, 495}, {90, 83, 35, 255} }},
	{{ {33, 8, 28}, 0, {572, 495}, {90, 173, 35, 255} }},
	{{ {16, 17, 51}, 0, {572, 495}, {45, 78, 89, 255} }},
	{{ {16, 8, 51}, 0, {572, 495}, {45, 178, 89, 255} }},
	{{ {-16, 8, 51}, 0, {572, 495}, {211, 178, 89, 255} }},
	{{ {-16, 17, 51}, 0, {572, 495}, {211, 78, 89, 255} }},
	{{ {-33, 17, 28}, 0, {572, 495}, {166, 83, 35, 255} }},
	{{ {-33, 8, 28}, 0, {572, 495}, {166, 173, 35, 255} }},
	{{ {-39, 8, -26}, 0, {1378, 239}, {164, 179, 215, 255} }},
	{{ {-39, 17, -26}, 0, {1378, 239}, {137, 255, 210, 255} }},
	{{ {-41, 35, -26}, 0, {1378, -16}, {137, 24, 217, 255} }},
	{{ {-25, 35, 21}, 0, {1787, -16}, {183, 24, 101, 255} }},
	{{ {-24, 17, 20}, 0, {1787, 239}, {216, 107, 55, 255} }},
	{{ {-20, 51, 14}, 0, {1787, -272}, {203, 90, 73, 255} }},
	{{ {-32, 51, -24}, 0, {1378, -272}, {171, 90, 228, 255} }},
	{{ {-20, 51, 14}, 0, {1787, -272}, {203, 90, 73, 255} }},
	{{ {0, 62, -13}, 0, {1583, -528}, {0, 127, 0, 255} }},
	{{ {-32, 51, -24}, 0, {1378, -272}, {171, 90, 228, 255} }},
	{{ {0, 35, -56}, 0, {968, -16}, {0, 24, 131, 255} }},
	{{ {-41, 35, -26}, 0, {1378, -16}, {137, 24, 217, 255} }},
	{{ {0, 51, -47}, 0, {968, -272}, {0, 90, 166, 255} }},
	{{ {0, 62, -13}, 0, {1173, -528}, {0, 127, 0, 255} }},
	{{ {41, 35, -26}, 0, {559, -16}, {119, 24, 217, 255} }},
	{{ {0, 17, -54}, 0, {968, 239}, {0, 250, 129, 255} }},
	{{ {0, 8, -54}, 0, {968, 239}, {0, 180, 154, 255} }},
	{{ {-39, 8, -26}, 0, {1378, 239}, {164, 179, 215, 255} }},
	{{ {24, 17, 20}, 0, {572, 495}, {0, 127, 0, 255} }},
	{{ {33, 17, 28}, 0, {572, 495}, {0, 127, 0, 255} }},
	{{ {39, 17, -26}, 0, {559, 239}, {0, 127, 0, 255} }},
	{{ {-33, 17, 28}, 0, {572, 495}, {0, 127, 0, 255} }},
	{{ {-24, 17, 20}, 0, {572, 495}, {0, 127, 0, 255} }},
	{{ {-39, 17, -26}, 0, {1378, 239}, {0, 127, 0, 255} }},
	{{ {-16, 17, 51}, 0, {572, 495}, {0, 127, 0, 255} }},
	{{ {16, 17, 51}, 0, {572, 495}, {0, 127, 0, 255} }},
	{{ {-39, 8, -26}, 0, {1378, 239}, {0, 129, 0, 255} }},
	{{ {0, 8, -54}, 0, {968, 239}, {0, 129, 0, 255} }},
	{{ {39, 8, -26}, 0, {559, 239}, {0, 129, 0, 255} }},
	{{ {-33, 8, 28}, 0, {572, 495}, {0, 129, 0, 255} }},
	{{ {33, 8, 28}, 0, {150, 239}, {0, 129, 0, 255} }},
	{{ {33, 8, 28}, 0, {1788, 291}, {0, 129, 0, 255} }},
	{{ {-16, 8, 51}, 0, {1788, 495}, {0, 129, 0, 255} }},
	{{ {-33, 8, 28}, 0, {1788, 495}, {0, 129, 0, 255} }},
	{{ {16, 8, 51}, 0, {1788, 291}, {0, 129, 0, 255} }},
};

Gfx anton_skl_cap_metal_Metal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(anton_skl_cap_metal_Metal_Cap_DL_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSP2Triangles(2, 6, 5, 0, 4, 5, 7, 0),
	gsSP2Triangles(5, 8, 7, 0, 4, 7, 9, 0),
	gsSP2Triangles(4, 9, 10, 0, 4, 10, 11, 0),
	gsSP2Triangles(3, 4, 11, 0, 3, 11, 12, 0),
	gsSP2Triangles(13, 3, 12, 0, 13, 12, 14, 0),
	gsSP2Triangles(12, 15, 14, 0, 12, 16, 15, 0),
	gsSP2Triangles(16, 12, 17, 0, 16, 17, 18, 0),
	gsSP2Triangles(19, 18, 17, 0, 19, 20, 18, 0),
	gsSP2Triangles(21, 20, 19, 0, 21, 19, 22, 0),
	gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
	gsSP2Triangles(25, 24, 23, 0, 25, 23, 26, 0),
	gsSP2Triangles(14, 25, 26, 0, 27, 14, 26, 0),
	gsSP2Triangles(28, 27, 26, 0, 28, 26, 29, 0),
	gsSP2Triangles(30, 27, 28, 0, 30, 31, 27, 0),
	gsSPVertex(anton_skl_cap_metal_Metal_Cap_DL_mesh_layer_1_vtx_0 + 32, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
	gsSP2Triangles(2, 5, 3, 0, 2, 6, 5, 0),
	gsSP2Triangles(5, 7, 3, 0, 4, 3, 8, 0),
	gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
	gsSP2Triangles(14, 12, 11, 0, 14, 11, 15, 0),
	gsSP2Triangles(16, 14, 15, 0, 17, 12, 14, 0),
	gsSP2Triangles(17, 18, 12, 0, 19, 20, 21, 0),
	gsSP2Triangles(21, 22, 19, 0, 21, 23, 22, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
	gsSPEndDisplayList(),
};


Gfx mat_anton_skl_cap_metal_Metal__METAL_[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_metal_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, anton_skl_cap_metal_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_anton_skl_cap_metal_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_metal_Metal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_anton_skl_cap_metal_Metal__METAL_),
	gsSPDisplayList(anton_skl_cap_metal_Metal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_anton_skl_cap_metal_Metal__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx anton_skl_cap_metal_Metal_Cap_DL_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_anton_skl_cap_metal_Metal__METAL_),
	gsSPDisplayList(anton_skl_cap_metal_Metal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_anton_skl_cap_metal_Metal__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

