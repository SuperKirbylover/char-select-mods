Lights1 brian_skl_cap_metal_wing_Metal__METAL__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 brian_skl_cap_metal_wing_Metal_Wing_Tip_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Lights1 brian_skl_cap_metal_wing_Metal_Wing_Base_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Gfx brian_skl_cap_metal_wing_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 brian_skl_cap_metal_wing_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/brian_skl/Metal_Shade.rgba16.inc.c"
};

Gfx brian_skl_cap_metal_wing_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 brian_skl_cap_metal_wing_Metal_Light_rgba16_rgba16[] = {
	#include "actors/brian_skl/Metal_Light.rgba16.inc.c"
};

Gfx brian_skl_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 brian_skl_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16[] = {
	#include "actors/brian_skl/custom_mario_metal_wing_tip_shade.rgba16.inc.c"
};

Gfx brian_skl_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 brian_skl_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16[] = {
	#include "actors/brian_skl/custom_mario_metal_wing_tip_light.rgba16.inc.c"
};

Gfx brian_skl_cap_metal_wing_custom_mario_metal_wing_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 brian_skl_cap_metal_wing_custom_mario_metal_wing_shade_rgba16[] = {
	#include "actors/brian_skl/custom_mario_metal_wing_shade.rgba16.inc.c"
};

Gfx brian_skl_cap_metal_wing_custom_mario_metal_wing_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 brian_skl_cap_metal_wing_custom_mario_metal_wing_light_rgba16[] = {
	#include "actors/brian_skl/custom_mario_metal_wing_light.rgba16.inc.c"
};

Vtx brian_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0[45] = {
	{{ {77, 31, 59}, 0, {1718, -523}, {103, 10, 74, 255} }},
	{{ {0, 0, 104}, 0, {1713, -44}, {0, 7, 127, 255} }},
	{{ {80, 0, 59}, 0, {1718, -44}, {106, 8, 70, 255} }},
	{{ {0, 31, 103}, 0, {1713, -523}, {0, 7, 127, 255} }},
	{{ {-77, 31, 59}, 0, {1718, -523}, {153, 10, 74, 255} }},
	{{ {-80, 0, 59}, 0, {1718, -44}, {150, 8, 70, 255} }},
	{{ {77, 31, 59}, 0, {1722, -523}, {103, 10, 74, 255} }},
	{{ {80, 0, 59}, 0, {1722, -44}, {106, 8, 70, 255} }},
	{{ {87, 31, 1}, 0, {1727, -523}, {127, 2, 0, 255} }},
	{{ {87, 0, 0}, 0, {1726, -44}, {127, 1, 255, 255} }},
	{{ {80, 31, -51}, 0, {1731, -523}, {115, 4, 202, 255} }},
	{{ {81, 0, -52}, 0, {1730, -44}, {115, 5, 203, 255} }},
	{{ {51, 31, -81}, 0, {1735, -523}, {63, 3, 146, 255} }},
	{{ {53, 0, -81}, 0, {1734, -44}, {64, 3, 147, 255} }},
	{{ {0, 31, -94}, 0, {1739, -523}, {0, 1, 129, 255} }},
	{{ {0, 0, -95}, 0, {1739, -44}, {0, 1, 129, 255} }},
	{{ {0, 31, -94}, 0, {1739, -523}, {0, 1, 129, 255} }},
	{{ {0, 0, -95}, 0, {1739, -44}, {0, 1, 129, 255} }},
	{{ {-53, 0, -81}, 0, {1734, -44}, {192, 3, 147, 255} }},
	{{ {-51, 31, -81}, 0, {1735, -523}, {193, 3, 146, 255} }},
	{{ {-81, 0, -52}, 0, {1730, -44}, {141, 5, 203, 255} }},
	{{ {-80, 31, -51}, 0, {1731, -523}, {141, 4, 202, 255} }},
	{{ {-87, 0, 0}, 0, {1726, -44}, {129, 1, 255, 255} }},
	{{ {-87, 31, 1}, 0, {1727, -523}, {129, 2, 0, 255} }},
	{{ {-80, 0, 59}, 0, {1722, -44}, {150, 8, 70, 255} }},
	{{ {-77, 31, 59}, 0, {1722, -523}, {153, 10, 74, 255} }},
	{{ {5, 2, 127}, 0, {1616, -52}, {0, 127, 250, 255} }},
	{{ {5, 1, 104}, 0, {1616, -52}, {0, 127, 250, 255} }},
	{{ {-5, 2, 127}, 0, {1614, -52}, {0, 127, 250, 255} }},
	{{ {-5, 1, 104}, 0, {1614, -52}, {0, 127, 250, 255} }},
	{{ {0, 7, 162}, 0, {1694, 19}, {3, 89, 90, 255} }},
	{{ {-6, -3, 166}, 0, {1697, 18}, {213, 193, 101, 255} }},
	{{ {6, -3, 166}, 0, {1691, 18}, {51, 196, 100, 255} }},
	{{ {-17, -2, 158}, 0, {1702, 19}, {161, 204, 66, 255} }},
	{{ {-14, 9, 147}, 0, {1701, 19}, {181, 102, 12, 255} }},
	{{ {0, 14, 148}, 0, {1694, 19}, {0, 126, 17, 255} }},
	{{ {14, 9, 147}, 0, {1687, 19}, {75, 101, 15, 255} }},
	{{ {17, -2, 158}, 0, {1686, 19}, {91, 207, 74, 255} }},
	{{ {-21, 0, 146}, 0, {1705, 19}, {139, 207, 250, 255} }},
	{{ {-17, 1, 134}, 0, {1703, 20}, {165, 228, 172, 255} }},
	{{ {-6, 2, 126}, 0, {1698, 20}, {205, 224, 144, 255} }},
	{{ {0, 11, 132}, 0, {1694, 20}, {253, 109, 192, 255} }},
	{{ {17, 1, 134}, 0, {1684, 20}, {95, 223, 178, 255} }},
	{{ {21, 0, 146}, 0, {1683, 19}, {117, 207, 250, 255} }},
	{{ {6, 2, 126}, 0, {1690, 20}, {43, 221, 142, 255} }},
};

Gfx brian_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(brian_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 0, 16, 0),
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
	gsSPVertex(brian_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 16, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSPVertex(brian_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 30, 15, 0),
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

Vtx brian_skl_cap_metal_wing_Wings_mesh_layer_4_vtx_0[8] = {
	{{ {-175, -29, -97}, 0, {1008, 2032}, {166, 237, 88, 255} }},
	{{ {-117, -5, -31}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-227, 144, -112}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-169, 168, -47}, 0, {-16, -16}, {166, 237, 88, 255} }},
	{{ {228, 144, -112}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {117, -5, -31}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {176, -29, -97}, 0, {1008, 2032}, {90, 237, 88, 255} }},
	{{ {169, 168, -47}, 0, {-16, -16}, {90, 237, 88, 255} }},
};

Gfx brian_skl_cap_metal_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(brian_skl_cap_metal_wing_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx brian_skl_cap_metal_wing_Wings_mesh_layer_4_vtx_1[8] = {
	{{ {-117, -5, -31}, 0, {1008, 2032}, {167, 237, 88, 255} }},
	{{ {-58, 18, 32}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-169, 168, -47}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-111, 191, 17}, 0, {-16, -16}, {167, 237, 88, 255} }},
	{{ {169, 168, -47}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {59, 18, 32}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {117, -5, -31}, 0, {1008, 2032}, {89, 237, 88, 255} }},
	{{ {111, 191, 17}, 0, {-16, -16}, {89, 237, 88, 255} }},
};

Gfx brian_skl_cap_metal_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(brian_skl_cap_metal_wing_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_brian_skl_cap_metal_wing_Metal__METAL_[] = {
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, brian_skl_cap_metal_wing_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, brian_skl_cap_metal_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_brian_skl_cap_metal_wing_Metal__METAL_[] = {
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_brian_skl_cap_metal_wing_Metal_Wing_Tip[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(brian_skl_cap_metal_wing_Metal_Wing_Tip_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, brian_skl_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, brian_skl_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_brian_skl_cap_metal_wing_Metal_Wing_Tip[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_brian_skl_cap_metal_wing_Metal_Wing_Base[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(brian_skl_cap_metal_wing_Metal_Wing_Base_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, brian_skl_cap_metal_wing_custom_mario_metal_wing_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, brian_skl_cap_metal_wing_custom_mario_metal_wing_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_brian_skl_cap_metal_wing_Metal_Wing_Base[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx brian_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_brian_skl_cap_metal_wing_Metal__METAL_),
	gsSPDisplayList(brian_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_brian_skl_cap_metal_wing_Metal__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx brian_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_brian_skl_cap_metal_wing_Metal__METAL_),
	gsSPDisplayList(brian_skl_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_brian_skl_cap_metal_wing_Metal__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx brian_skl_cap_metal_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_brian_skl_cap_metal_wing_Metal_Wing_Tip),
	gsSPDisplayList(brian_skl_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_brian_skl_cap_metal_wing_Metal_Wing_Tip),
	gsSPDisplayList(mat_brian_skl_cap_metal_wing_Metal_Wing_Base),
	gsSPDisplayList(brian_skl_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_brian_skl_cap_metal_wing_Metal_Wing_Base),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx brian_skl_cap_metal_wing_Wings_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_brian_skl_cap_metal_wing_Metal__METAL_),
	gsSPDisplayList(brian_skl_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(brian_skl_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_brian_skl_cap_metal_wing_Metal__METAL_),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

