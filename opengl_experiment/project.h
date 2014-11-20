//
//  project.h
//  opengl_experiment
//
//  Created by Leo Schultz on 11/20/14.
//  Copyright (c) 2014 Leo Schultz. All rights reserved.
//

const int texture_width = 256;
const int texture_height = 256;
GLubyte texture_image[256][256][3];

void generate_texture()
{
    for(int i=0; i<texture_width; i++)
        for(int j=0; j<texture_width; j++)
        {
            texture_image[i][j][0] = 255;
            texture_image[i][j][1] = 255*(i & 0x04);
            texture_image[i][j][2] = 255*(j & 0x04);
        }
}