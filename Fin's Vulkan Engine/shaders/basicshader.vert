#version 450

vec2 positions[3] = vec2[](
	vec2(0.1, -0.4),
	vec2(0.1, 0.0),
	vec2(-0.4, -0.4)
);

void main(){
	gl_Position = vec4(positions[gl_VertexIndex], 0.0, 1.0);
}