package com.example.libgdx;

import com.badlogic.gdx.ApplicationAdapter;
import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.graphics.GL20;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;

public class TextureRender extends ApplicationAdapter {
    private Texture etcTexture;
    private Texture cimTexture;
    private SpriteBatch batch;

    private int viewportWidth;
    private int viewportHeight;

    @Override
    public void create() {
        this.etcTexture = new Texture(Gdx.files.internal("demo.etc1"));
        this.cimTexture = new Texture(Gdx.files.internal("demo.cim"));

        this.batch = new SpriteBatch();

        this.viewportWidth = Gdx.graphics.getWidth();
        this.viewportHeight = Gdx.graphics.getHeight();
    }

    @Override
    public void resize(int width, int height) {
        super.resize(width, height);

        this.viewportWidth = width;
        this.viewportHeight = height;
    }

    @Override
    public void render() {
        Gdx.gl.glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
        Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);

        this.batch.begin();

        int etcTexX = this.viewportWidth / 2 - etcTexture.getWidth() / 2;
        int etcTexY = this.viewportHeight / 2 - etcTexture.getHeight() / 2;
        this.batch.draw(this.etcTexture, etcTexX, etcTexY);

        int cimTexX = this.viewportWidth / 2 - cimTexture.getWidth() / 2;
        int cimTexY = etcTexY + cimTexture.getWidth();
        this.batch.draw(this.cimTexture, cimTexX, cimTexY);

        this.batch.end();
    }

    @Override
    public void dispose() {
        this.etcTexture.dispose();
        this.cimTexture.dispose();
    }
}
