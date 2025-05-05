Lights1 homer_cap_metal_wing_METAL_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Lights1 homer_cap_metal_wing_Metal_Wing_Tip_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Lights1 homer_cap_metal_wing_Metal_Wing_Base_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x49, 0x49, 0x49);

Gfx homer_cap_metal_wing_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 homer_cap_metal_wing_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/homer/Metal_Shade.rgba16.inc.c"
};

Gfx homer_cap_metal_wing_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 homer_cap_metal_wing_Metal_Light_rgba16_rgba16[] = {
	#include "actors/homer/Metal_Light.rgba16.inc.c"
};

Gfx homer_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 homer_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16[] = {
	#include "actors/homer/custom_mario_metal_wing_tip_shade.rgba16.inc.c"
};

Gfx homer_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 homer_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16[] = {
	#include "actors/homer/custom_mario_metal_wing_tip_light.rgba16.inc.c"
};

Gfx homer_cap_metal_wing_custom_mario_metal_wing_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 homer_cap_metal_wing_custom_mario_metal_wing_shade_rgba16[] = {
	#include "actors/homer/custom_mario_metal_wing_shade.rgba16.inc.c"
};

Gfx homer_cap_metal_wing_custom_mario_metal_wing_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 homer_cap_metal_wing_custom_mario_metal_wing_light_rgba16[] = {
	#include "actors/homer/custom_mario_metal_wing_light.rgba16.inc.c"
};

Vtx homer_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0[28] = {
	{{ {-30, 0, 52}, 0, {566, -522}, {0, 129, 0, 255} }},
	{{ {61, 0, 0}, 0, {566, -531}, {0, 129, 0, 255} }},
	{{ {30, 0, 52}, 0, {566, -522}, {0, 129, 0, 255} }},
	{{ {-61, 0, 0}, 0, {566, -532}, {0, 129, 0, 255} }},
	{{ {-30, 0, -52}, 0, {566, -542}, {0, 129, 0, 255} }},
	{{ {30, 0, -52}, 0, {566, -542}, {0, 129, 0, 255} }},
	{{ {-30, 0, 52}, 0, {2250, 495}, {213, 191, 100, 255} }},
	{{ {-61, 178, 0}, 0, {1690, -557}, {148, 65, 243, 255} }},
	{{ {-61, 0, 0}, 0, {1690, 495}, {148, 191, 13, 255} }},
	{{ {-30, 178, 52}, 0, {2250, -557}, {190, 65, 87, 255} }},
	{{ {30, 0, 52}, 0, {2958, 495}, {66, 191, 87, 255} }},
	{{ {30, 178, 52}, 0, {2958, -557}, {43, 65, 100, 255} }},
	{{ {61, 0, 0}, 0, {3615, 495}, {108, 191, 243, 255} }},
	{{ {61, 178, 0}, 0, {3615, -557}, {108, 65, 13, 255} }},
	{{ {-61, 178, 0}, 0, {-2533, -557}, {148, 65, 243, 255} }},
	{{ {-30, 178, -52}, 0, {-2600, -557}, {213, 65, 156, 255} }},
	{{ {-61, 0, 0}, 0, {-2533, 495}, {148, 191, 13, 255} }},
	{{ {-30, 0, -52}, 0, {-2600, 495}, {190, 191, 169, 255} }},
	{{ {30, 178, -52}, 0, {-2689, -557}, {66, 65, 169, 255} }},
	{{ {30, 0, -52}, 0, {-2689, 495}, {43, 191, 156, 255} }},
	{{ {61, 178, 0}, 0, {-2775, -557}, {108, 65, 13, 255} }},
	{{ {61, 0, 0}, 0, {-2775, 495}, {108, 191, 243, 255} }},
	{{ {30, 178, 52}, 0, {772, -522}, {0, 127, 0, 255} }},
	{{ {61, 178, 0}, 0, {772, -531}, {0, 127, 0, 255} }},
	{{ {-30, 178, 52}, 0, {772, -522}, {0, 127, 0, 255} }},
	{{ {-61, 178, 0}, 0, {772, -532}, {0, 127, 0, 255} }},
	{{ {-30, 178, -52}, 0, {772, -542}, {0, 127, 0, 255} }},
	{{ {30, 178, -52}, 0, {772, -542}, {0, 127, 0, 255} }},
};

Gfx homer_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(homer_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 0, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 1, 3, 0, 5, 1, 4, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
	gsSP2Triangles(10, 9, 6, 0, 11, 9, 10, 0),
	gsSP2Triangles(12, 11, 10, 0, 13, 11, 12, 0),
	gsSP2Triangles(14, 15, 16, 0, 16, 15, 17, 0),
	gsSP2Triangles(15, 18, 17, 0, 17, 18, 19, 0),
	gsSP2Triangles(18, 20, 19, 0, 19, 20, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 24, 23, 25, 0),
	gsSP2Triangles(25, 23, 26, 0, 26, 23, 27, 0),
	gsSPEndDisplayList(),
};

Vtx homer_cap_metal_wing_Wings_mesh_layer_4_vtx_0[8] = {
	{{ {-145, 14, -117}, 0, {1008, 2032}, {166, 237, 88, 255} }},
	{{ {-87, 37, -51}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-197, 186, -132}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-139, 210, -67}, 0, {-16, -16}, {166, 237, 88, 255} }},
	{{ {198, 186, -132}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {87, 37, -51}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {146, 14, -117}, 0, {1008, 2032}, {90, 237, 88, 255} }},
	{{ {139, 210, -67}, 0, {-16, -16}, {90, 237, 88, 255} }},
};

Gfx homer_cap_metal_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(homer_cap_metal_wing_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx homer_cap_metal_wing_Wings_mesh_layer_4_vtx_1[8] = {
	{{ {-87, 37, -51}, 0, {1008, 2032}, {167, 237, 88, 255} }},
	{{ {-28, 60, 12}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-139, 210, -67}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-81, 233, -3}, 0, {-16, -16}, {167, 237, 88, 255} }},
	{{ {139, 210, -67}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {29, 60, 12}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {87, 37, -51}, 0, {1008, 2032}, {89, 237, 88, 255} }},
	{{ {81, 233, -3}, 0, {-16, -16}, {89, 237, 88, 255} }},
};

Gfx homer_cap_metal_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(homer_cap_metal_wing_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_homer_cap_metal_wing_METAL[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, homer_cap_metal_wing_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, homer_cap_metal_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_homer_cap_metal_wing_METAL[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_homer_cap_metal_wing_Metal_Wing_Tip[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(homer_cap_metal_wing_Metal_Wing_Tip_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, homer_cap_metal_wing_custom_mario_metal_wing_tip_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, homer_cap_metal_wing_custom_mario_metal_wing_tip_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_homer_cap_metal_wing_Metal_Wing_Tip[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_homer_cap_metal_wing_Metal_Wing_Base[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(homer_cap_metal_wing_Metal_Wing_Base_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, homer_cap_metal_wing_custom_mario_metal_wing_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, homer_cap_metal_wing_custom_mario_metal_wing_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_homer_cap_metal_wing_Metal_Wing_Base[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx homer_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_homer_cap_metal_wing_METAL),
	gsSPDisplayList(homer_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_homer_cap_metal_wing_METAL),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx homer_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_mat_override_METAL_0[] = {
	gsSPDisplayList(mat_homer_cap_metal_wing_METAL),
	gsSPDisplayList(homer_cap_metal_wing_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_homer_cap_metal_wing_METAL),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx homer_cap_metal_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_homer_cap_metal_wing_Metal_Wing_Tip),
	gsSPDisplayList(homer_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_homer_cap_metal_wing_Metal_Wing_Tip),
	gsSPDisplayList(mat_homer_cap_metal_wing_Metal_Wing_Base),
	gsSPDisplayList(homer_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_homer_cap_metal_wing_Metal_Wing_Base),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx homer_cap_metal_wing_Wings_mesh_layer_4_mat_override_METAL_0[] = {
	gsSPDisplayList(mat_homer_cap_metal_wing_METAL),
	gsSPDisplayList(homer_cap_metal_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(homer_cap_metal_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_homer_cap_metal_wing_METAL),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

