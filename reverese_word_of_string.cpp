<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Corporate Birthday Templates</title>
<link href="https://fonts.googleapis.com/css2?family=Playfair+Display:ital,wght@0,400;0,700;0,900;1,400&family=Cormorant+Garamond:ital,wght@0,300;0,600;1,300&family=Bebas+Neue&family=DM+Sans:wght@300;400;500;600&family=Abril+Fatface&family=Space+Mono:wght@400;700&family=Josefin+Sans:wght@100;300;400;600&family=Fraunces:ital,wght@0,100;0,700;1,100&family=Syne:wght@400;700;800&family=Cinzel:wght@400;700&display=swap" rel="stylesheet">

<style>
  * { margin: 0; padding: 0; box-sizing: border-box; }
  body { background: #1a1a2e; font-family: sans-serif; padding: 40px 20px; }

  h1.page-title {
    text-align: center;
    color: #fff;
    font-family: 'DM Sans', sans-serif;
    font-size: 14px;
    font-weight: 400;
    letter-spacing: 6px;
    text-transform: uppercase;
    margin-bottom: 60px;
    opacity: 0.5;
  }

  .grid {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(600px, 1fr));
    gap: 60px;
    max-width: 1400px;
    margin: 0 auto;
  }

  .label {
    text-align: center;
    color: rgba(255,255,255,0.3);
    font-family: 'DM Sans', sans-serif;
    font-size: 11px;
    letter-spacing: 4px;
    text-transform: uppercase;
    margin-bottom: 16px;
  }

  /* ─────────────────────────────────────────
     TEMPLATE 1 — GOLD LUXURY EDITORIAL
  ───────────────────────────────────────── */
  .t1 {
    width: 600px;
    height: 380px;
    background: #0d0d0d;
    position: relative;
    overflow: hidden;
    display: flex;
    align-items: stretch;
    border: 1px solid #c9a84c;
    box-shadow: 0 0 80px rgba(201,168,76,0.15), inset 0 0 60px rgba(201,168,76,0.04);
  }

  .t1::before {
    content: '';
    position: absolute;
    top: 12px; left: 12px; right: 12px; bottom: 12px;
    border: 1px solid rgba(201,168,76,0.3);
    pointer-events: none;
    z-index: 3;
  }

  .t1::after {
    content: '';
    position: absolute;
    top: 0; left: 0; right: 0; bottom: 0;
    background: radial-gradient(ellipse at 70% 50%, rgba(201,168,76,0.08) 0%, transparent 70%);
    pointer-events: none;
    z-index: 1;
  }

  .t1-img {
    width: 220px;
    min-height: 100%;
    flex-shrink: 0;
    position: relative;
    overflow: hidden;
  }

  .t1-img img {
    width: 100%; height: 100%;
    object-fit: cover;
    filter: grayscale(30%) contrast(1.1);
  }

  .t1-img::after {
    content: '';
    position: absolute;
    top: 0; right: 0; bottom: 0;
    width: 60px;
    background: linear-gradient(to right, transparent, #0d0d0d);
  }

  .t1-content {
    flex: 1;
    padding: 36px 40px 36px 28px;
    display: flex;
    flex-direction: column;
    justify-content: center;
    position: relative;
    z-index: 2;
  }

  .t1-tag {
    font-family: 'Space Mono', monospace;
    font-size: 9px;
    letter-spacing: 5px;
    color: #c9a84c;
    text-transform: uppercase;
    margin-bottom: 16px;
    display: flex;
    align-items: center;
    gap: 10px;
  }

  .t1-tag::before {
    content: '';
    display: inline-block;
    width: 30px;
    height: 1px;
    background: #c9a84c;
  }

  .t1-name {
    font-family: 'Playfair Display', serif;
    font-size: 38px;
    font-weight: 700;
    color: #fff;
    line-height: 1.05;
    margin-bottom: 6px;
    letter-spacing: -0.5px;
  }

  .t1-wish {
    font-family: 'Cormorant Garamond', serif;
    font-size: 15px;
    font-style: italic;
    color: #c9a84c;
    margin-bottom: 20px;
    letter-spacing: 1px;
  }

  .t1-divider {
    width: 50px;
    height: 1px;
    background: linear-gradient(to right, #c9a84c, transparent);
    margin-bottom: 20px;
  }

  .t1-info {
    display: flex;
    flex-direction: column;
    gap: 6px;
  }

  .t1-info-row {
    display: flex;
    align-items: baseline;
    gap: 8px;
  }

  .t1-info-label {
    font-family: 'Space Mono', monospace;
    font-size: 7.5px;
    letter-spacing: 3px;
    color: #c9a84c;
    text-transform: uppercase;
    width: 52px;
    flex-shrink: 0;
  }

  .t1-info-val {
    font-family: 'DM Sans', sans-serif;
    font-size: 12px;
    color: rgba(255,255,255,0.8);
    font-weight: 300;
  }

  .t1-event {
    margin-top: 20px;
    padding: 12px 16px;
    background: rgba(201,168,76,0.07);
    border-left: 2px solid #c9a84c;
  }

  .t1-event-label {
    font-family: 'Space Mono', monospace;
    font-size: 8px;
    letter-spacing: 4px;
    color: #c9a84c;
    text-transform: uppercase;
    margin-bottom: 4px;
  }

  .t1-event-val {
    font-family: 'Cormorant Garamond', serif;
    font-size: 12px;
    color: rgba(255,255,255,0.7);
    font-style: italic;
    line-height: 1.4;
  }

  /* ─────────────────────────────────────────
     TEMPLATE 2 — NEON CYBERPUNK
  ───────────────────────────────────────── */
  .t2 {
    width: 600px;
    height: 380px;
    background: #050510;
    position: relative;
    overflow: hidden;
    display: flex;
    flex-direction: column;
  }

  .t2-bg-lines {
    position: absolute;
    top: 0; left: 0; right: 0; bottom: 0;
    background-image:
      repeating-linear-gradient(0deg, transparent, transparent 39px, rgba(0,255,200,0.04) 40px),
      repeating-linear-gradient(90deg, transparent, transparent 39px, rgba(0,255,200,0.04) 40px);
    pointer-events: none;
  }

  .t2-accent-line {
    position: absolute;
    top: 0; left: 160px;
    width: 2px;
    height: 100%;
    background: linear-gradient(to bottom, transparent, #00ffc8 30%, #ff00aa 70%, transparent);
    opacity: 0.6;
  }

  .t2-glow-top {
    position: absolute;
    top: -80px; left: 50%;
    transform: translateX(-50%);
    width: 300px;
    height: 200px;
    background: radial-gradient(ellipse, rgba(0,255,200,0.12) 0%, transparent 70%);
    pointer-events: none;
  }

  .t2-glow-bot {
    position: absolute;
    bottom: -80px; right: 0;
    width: 250px;
    height: 200px;
    background: radial-gradient(ellipse, rgba(255,0,170,0.1) 0%, transparent 70%);
    pointer-events: none;
  }

  .t2-img {
    position: absolute;
    top: 0; left: 0;
    width: 160px;
    height: 100%;
    overflow: hidden;
  }

  .t2-img img {
    width: 100%; height: 100%;
    object-fit: cover;
    filter: saturate(0) contrast(1.3) brightness(0.7);
    mix-blend-mode: screen;
  }

  .t2-img::after {
    content: '';
    position: absolute;
    top: 0; left: 0; right: 0; bottom: 0;
    background: linear-gradient(135deg, rgba(0,255,200,0.2) 0%, rgba(255,0,170,0.15) 100%);
    mix-blend-mode: overlay;
  }

  .t2-img::before {
    content: '';
    position: absolute;
    top: 0; right: 0; bottom: 0;
    width: 30px;
    background: linear-gradient(to right, transparent, #050510);
    z-index: 2;
  }

  .t2-content {
    position: absolute;
    left: 180px;
    top: 0; right: 0; bottom: 0;
    padding: 28px 36px;
    display: flex;
    flex-direction: column;
    justify-content: center;
    z-index: 2;
  }

  .t2-hb {
    font-family: 'Bebas Neue', sans-serif;
    font-size: 62px;
    line-height: 0.9;
    letter-spacing: 3px;
    background: linear-gradient(90deg, #00ffc8, #ff00aa);
    -webkit-background-clip: text;
    -webkit-text-fill-color: transparent;
    background-clip: text;
    margin-bottom: 4px;
    text-shadow: none;
    filter: drop-shadow(0 0 20px rgba(0,255,200,0.4));
  }

  .t2-name {
    font-family: 'Syne', sans-serif;
    font-size: 22px;
    font-weight: 800;
    color: #fff;
    letter-spacing: 4px;
    text-transform: uppercase;
    margin-bottom: 14px;
  }

  .t2-strip {
    display: flex;
    gap: 0;
    margin-bottom: 18px;
    overflow: hidden;
    border: 1px solid rgba(0,255,200,0.3);
  }

  .t2-strip-item {
    flex: 1;
    padding: 8px 12px;
    border-right: 1px solid rgba(0,255,200,0.3);
  }

  .t2-strip-item:last-child { border-right: none; }

  .t2-strip-label {
    font-family: 'Space Mono', monospace;
    font-size: 7px;
    letter-spacing: 3px;
    color: #00ffc8;
    text-transform: uppercase;
    margin-bottom: 3px;
  }

  .t2-strip-val {
    font-family: 'DM Sans', sans-serif;
    font-size: 11px;
    color: rgba(255,255,255,0.8);
    font-weight: 500;
  }

  .t2-greeting {
    font-family: 'Space Mono', monospace;
    font-size: 10px;
    color: rgba(255,255,255,0.5);
    line-height: 1.6;
    border-left: 2px solid #ff00aa;
    padding-left: 12px;
    margin-bottom: 14px;
  }

  .t2-event {
    background: rgba(0,255,200,0.05);
    border: 1px solid rgba(0,255,200,0.2);
    padding: 8px 12px;
  }

  .t2-event-label {
    font-family: 'Space Mono', monospace;
    font-size: 7px;
    letter-spacing: 3px;
    color: #ff00aa;
    text-transform: uppercase;
    margin-bottom: 3px;
  }

  .t2-event-val {
    font-family: 'DM Sans', sans-serif;
    font-size: 10px;
    color: rgba(255,255,255,0.7);
  }

  /* ─────────────────────────────────────────
     TEMPLATE 3 — SOFT BOTANICAL
  ───────────────────────────────────────── */
  .t3 {
    width: 600px;
    height: 380px;
    background: #f7f3ee;
    position: relative;
    overflow: hidden;
    display: flex;
  }

  .t3-left {
    width: 200px;
    flex-shrink: 0;
    position: relative;
    background: #e8dfd6;
    overflow: hidden;
  }

  .t3-left img {
    width: 100%; height: 100%;
    object-fit: cover;
    opacity: 0.85;
    mix-blend-mode: multiply;
  }

  .t3-leaf1, .t3-leaf2, .t3-leaf3 {
    position: absolute;
    font-size: 80px;
    opacity: 0.15;
  }

  .t3-leaf1 { top: -20px; left: -10px; transform: rotate(-30deg); }
  .t3-leaf2 { bottom: -10px; right: -5px; transform: rotate(20deg); font-size: 60px; }
  .t3-leaf3 { top: 50%; left: 30px; transform: rotate(45deg); font-size: 50px; }

  .t3-arch {
    position: absolute;
    top: 0; right: -60px;
    width: 120px;
    height: 100%;
    background: #f7f3ee;
    border-radius: 60px 0 0 60px;
  }

  .t3-right {
    flex: 1;
    padding: 36px 36px 36px 48px;
    display: flex;
    flex-direction: column;
    justify-content: center;
    position: relative;
    z-index: 2;
  }

  .t3-circle-deco {
    position: absolute;
    width: 180px;
    height: 180px;
    border-radius: 50%;
    border: 1px solid rgba(180,150,120,0.2);
    top: -40px;
    right: -40px;
  }

  .t3-circle-deco2 {
    position: absolute;
    width: 80px;
    height: 80px;
    border-radius: 50%;
    border: 1px solid rgba(180,150,120,0.15);
    bottom: 30px;
    right: 20px;
  }

  .t3-tag {
    font-family: 'Josefin Sans', sans-serif;
    font-size: 9px;
    letter-spacing: 5px;
    color: #b49678;
    text-transform: uppercase;
    margin-bottom: 12px;
  }

  .t3-hb {
    font-family: 'Fraunces', serif;
    font-size: 42px;
    font-weight: 100;
    color: #3d2c1e;
    line-height: 1.1;
    margin-bottom: 4px;
    letter-spacing: -1px;
  }

  .t3-hb span {
    font-style: italic;
    font-weight: 100;
    color: #8b6347;
  }

  .t3-name {
    font-family: 'Fraunces', serif;
    font-size: 28px;
    font-weight: 700;
    color: #3d2c1e;
    margin-bottom: 18px;
  }

  .t3-line {
    display: flex;
    align-items: center;
    gap: 14px;
    margin-bottom: 18px;
  }

  .t3-line::before {
    content: '';
    width: 40px;
    height: 1px;
    background: #b49678;
    flex-shrink: 0;
  }

  .t3-line::after {
    content: '';
    flex: 1;
    height: 1px;
    background: linear-gradient(to right, #b49678, transparent);
  }

  .t3-info {
    display: grid;
    grid-template-columns: 1fr 1fr;
    gap: 10px 20px;
    margin-bottom: 16px;
  }

  .t3-info-item {}

  .t3-info-key {
    font-family: 'Josefin Sans', sans-serif;
    font-size: 8px;
    letter-spacing: 3px;
    color: #b49678;
    text-transform: uppercase;
    margin-bottom: 2px;
  }

  .t3-info-val {
    font-family: 'DM Sans', sans-serif;
    font-size: 12px;
    color: #3d2c1e;
    font-weight: 500;
  }

  .t3-greeting {
    font-family: 'Cormorant Garamond', serif;
    font-size: 13px;
    font-style: italic;
    color: #7a6050;
    line-height: 1.5;
    margin-bottom: 14px;
  }

  .t3-event-box {
    background: #eee6db;
    padding: 10px 14px;
    border-radius: 2px;
    display: flex;
    gap: 10px;
    align-items: flex-start;
  }

  .t3-event-icon {
    font-size: 18px;
    flex-shrink: 0;
    margin-top: 1px;
  }

  .t3-event-text {}

  .t3-event-key {
    font-family: 'Josefin Sans', sans-serif;
    font-size: 7px;
    letter-spacing: 3px;
    color: #b49678;
    text-transform: uppercase;
    margin-bottom: 2px;
  }

  .t3-event-val {
    font-family: 'DM Sans', sans-serif;
    font-size: 10px;
    color: #5a4030;
  }

  /* ─────────────────────────────────────────
     TEMPLATE 4 — BOLD GEOMETRIC BAUHAUS
  ───────────────────────────────────────── */
  .t4 {
    width: 600px;
    height: 380px;
    background: #f0ebe3;
    position: relative;
    overflow: hidden;
    display: flex;
  }

  .t4-left {
    width: 30px;
    background: #1a1a1a;
    flex-shrink: 0;
  }

  .t4-image-col {
    width: 190px;
    flex-shrink: 0;
    position: relative;
    overflow: hidden;
  }

  .t4-image-col img {
    width: 100%; height: 100%;
    object-fit: cover;
  }

  .t4-red-bar {
    position: absolute;
    bottom: 0; left: 0; right: 0;
    height: 8px;
    background: #e63329;
  }

  .t4-content {
    flex: 1;
    position: relative;
    display: flex;
    flex-direction: column;
    padding: 0;
  }

  .t4-top-bar {
    background: #1a1a1a;
    height: 50px;
    padding: 0 32px;
    display: flex;
    align-items: center;
    gap: 16px;
    flex-shrink: 0;
  }

  .t4-top-hb {
    font-family: 'Bebas Neue', sans-serif;
    font-size: 26px;
    letter-spacing: 6px;
    color: #fff;
  }

  .t4-top-dot {
    width: 8px; height: 8px;
    background: #e63329;
    border-radius: 50%;
    flex-shrink: 0;
  }

  .t4-top-team {
    font-family: 'Space Mono', monospace;
    font-size: 9px;
    letter-spacing: 3px;
    color: rgba(255,255,255,0.5);
    text-transform: uppercase;
  }

  .t4-main {
    flex: 1;
    padding: 26px 32px 20px;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
  }

  .t4-name {
    font-family: 'Bebas Neue', sans-serif;
    font-size: 68px;
    line-height: 0.85;
    color: #1a1a1a;
    letter-spacing: 2px;
    position: relative;
  }

  .t4-name::after {
    content: '';
    display: block;
    width: 60px;
    height: 6px;
    background: #e63329;
    margin-top: 12px;
  }

  .t4-bottom {
    display: flex;
    flex-direction: column;
    gap: 0;
  }

  .t4-meta-row {
    display: flex;
    gap: 0;
    border-top: 1px solid #1a1a1a;
  }

  .t4-meta-cell {
    flex: 1;
    padding: 8px 0;
    border-right: 1px solid #1a1a1a;
  }

  .t4-meta-cell:last-child { border-right: none; }

  .t4-meta-label {
    font-family: 'Space Mono', monospace;
    font-size: 7px;
    letter-spacing: 3px;
    color: #888;
    text-transform: uppercase;
    margin-bottom: 2px;
  }

  .t4-meta-val {
    font-family: 'DM Sans', sans-serif;
    font-size: 11px;
    color: #1a1a1a;
    font-weight: 600;
  }

  .t4-greeting {
    font-family: 'Cormorant Garamond', serif;
    font-size: 12px;
    font-style: italic;
    color: #666;
    padding-top: 8px;
    border-top: 1px solid #1a1a1a;
    line-height: 1.4;
  }

  .t4-event-strip {
    background: #e63329;
    padding: 8px 32px;
    flex-shrink: 0;
  }

  .t4-event-inner {
    display: flex;
    align-items: center;
    gap: 14px;
  }

  .t4-event-tag {
    font-family: 'Bebas Neue', sans-serif;
    font-size: 12px;
    letter-spacing: 4px;
    color: rgba(255,255,255,0.7);
    flex-shrink: 0;
  }

  .t4-event-val {
    font-family: 'DM Sans', sans-serif;
    font-size: 11px;
    color: #fff;
    font-weight: 500;
  }

  /* ─────────────────────────────────────────
     TEMPLATE 5 — MIDNIGHT AURORA
  ───────────────────────────────────────── */
  .t5 {
    width: 600px;
    height: 380px;
    background: #080c1a;
    position: relative;
    overflow: hidden;
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
  }

  .t5-aurora {
    position: absolute;
    top: 0; left: 0; right: 0; bottom: 0;
    background:
      radial-gradient(ellipse at 20% 20%, rgba(88,200,160,0.18) 0%, transparent 50%),
      radial-gradient(ellipse at 80% 10%, rgba(100,80,220,0.18) 0%, transparent 45%),
      radial-gradient(ellipse at 60% 80%, rgba(200,80,120,0.12) 0%, transparent 50%),
      radial-gradient(ellipse at 10% 80%, rgba(40,160,220,0.12) 0%, transparent 45%);
    pointer-events: none;
  }

  .t5-stars {
    position: absolute;
    top: 0; left: 0; right: 0; bottom: 0;
    background-image:
      radial-gradient(circle, white 1px, transparent 1px),
      radial-gradient(circle, white 1px, transparent 1px),
      radial-gradient(circle, rgba(255,255,255,0.5) 1px, transparent 1px);
    background-size: 120px 80px, 200px 130px, 80px 90px;
    background-position: 10px 15px, 60px 40px, 90px 20px;
    opacity: 0.3;
    pointer-events: none;
  }

  .t5-main {
    position: relative;
    z-index: 2;
    display: flex;
    align-items: stretch;
    gap: 0;
    width: 100%;
    height: 100%;
  }

  .t5-img {
    width: 200px;
    flex-shrink: 0;
    position: relative;
    overflow: hidden;
  }

  .t5-img img {
    width: 100%; height: 100%;
    object-fit: cover;
    filter: brightness(0.7) saturate(1.2);
  }

  .t5-img::after {
    content: '';
    position: absolute;
    top: 0; left: 0; right: 0; bottom: 0;
    background: linear-gradient(to right, transparent 60%, #080c1a);
  }

  .t5-ring {
    position: absolute;
    top: 50%; left: 50%;
    transform: translate(-50%, -50%);
    width: 140px; height: 140px;
    border-radius: 50%;
    border: 1px solid rgba(88,200,160,0.3);
    box-shadow: 0 0 30px rgba(88,200,160,0.2), inset 0 0 30px rgba(88,200,160,0.1);
    pointer-events: none;
    z-index: 3;
  }

  .t5-content {
    flex: 1;
    padding: 32px 40px;
    display: flex;
    flex-direction: column;
    justify-content: center;
    gap: 0;
  }

  .t5-label {
    font-family: 'Josefin Sans', sans-serif;
    font-size: 8px;
    letter-spacing: 6px;
    color: rgba(88,200,160,0.8);
    text-transform: uppercase;
    margin-bottom: 8px;
  }

  .t5-hb {
    font-family: 'Cinzel', serif;
    font-size: 14px;
    letter-spacing: 8px;
    color: rgba(255,255,255,0.5);
    text-transform: uppercase;
    margin-bottom: 4px;
  }

  .t5-name {
    font-family: 'Playfair Display', serif;
    font-size: 44px;
    font-weight: 900;
    line-height: 1;
    color: #fff;
    margin-bottom: 6px;
    letter-spacing: -1px;
    text-shadow: 0 0 40px rgba(88,200,160,0.3);
  }

  .t5-greeting {
    font-family: 'Cormorant Garamond', serif;
    font-size: 14px;
    font-style: italic;
    color: rgba(255,255,255,0.5);
    margin-bottom: 24px;
    line-height: 1.4;
  }

  .t5-cards {
    display: grid;
    grid-template-columns: 1fr 1fr;
    gap: 8px;
    margin-bottom: 12px;
  }

  .t5-card {
    background: rgba(255,255,255,0.04);
    border: 1px solid rgba(255,255,255,0.1);
    padding: 10px 12px;
    backdrop-filter: blur(10px);
  }

  .t5-card-label {
    font-family: 'Josefin Sans', sans-serif;
    font-size: 7px;
    letter-spacing: 3px;
    color: rgba(88,200,160,0.7);
    text-transform: uppercase;
    margin-bottom: 3px;
  }

  .t5-card-val {
    font-family: 'DM Sans', sans-serif;
    font-size: 11px;
    color: rgba(255,255,255,0.8);
    font-weight: 500;
  }

  .t5-event {
    background: rgba(88,200,160,0.06);
    border: 1px solid rgba(88,200,160,0.2);
    padding: 10px 14px;
    display: flex;
    align-items: flex-start;
    gap: 10px;
  }

  .t5-event-dot {
    width: 6px; height: 6px;
    border-radius: 50%;
    background: #58c8a0;
    flex-shrink: 0;
    margin-top: 4px;
    box-shadow: 0 0 8px rgba(88,200,160,0.8);
  }

  .t5-event-body {}

  .t5-event-label {
    font-family: 'Josefin Sans', sans-serif;
    font-size: 7px;
    letter-spacing: 3px;
    color: rgba(88,200,160,0.7);
    text-transform: uppercase;
    margin-bottom: 2px;
  }

  .t5-event-val {
    font-family: 'DM Sans', sans-serif;
    font-size: 10px;
    color: rgba(255,255,255,0.65);
    line-height: 1.4;
  }

  /* ─────────────────────────────────────────
     TEMPLATE 6 — MINIMALIST SCANDINAVIA
  ───────────────────────────────────────── */
  .t6 {
    width: 600px;
    height: 380px;
    background: #fafaf8;
    position: relative;
    overflow: hidden;
    display: flex;
  }

  .t6-side {
    width: 10px;
    background: #2d2d2d;
    flex-shrink: 0;
  }

  .t6-img-wrap {
    width: 200px;
    flex-shrink: 0;
    position: relative;
    overflow: hidden;
    background: #e8e8e4;
  }

  .t6-img-wrap img {
    width: 100%; height: 100%;
    object-fit: cover;
    filter: grayscale(20%);
  }

  .t6-img-bottom {
    position: absolute;
    bottom: 0; left: 0; right: 0;
    padding: 12px 16px;
    background: linear-gradient(to top, rgba(0,0,0,0.7) 0%, transparent 100%);
  }

  .t6-img-team {
    font-family: 'Josefin Sans', sans-serif;
    font-size: 8px;
    letter-spacing: 4px;
    color: rgba(255,255,255,0.8);
    text-transform: uppercase;
  }

  .t6-content {
    flex: 1;
    padding: 40px 44px;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
    position: relative;
  }

  .t6-top {}

  .t6-topline {
    display: flex;
    align-items: center;
    gap: 16px;
    margin-bottom: 28px;
  }

  .t6-topline-text {
    font-family: 'Josefin Sans', sans-serif;
    font-size: 9px;
    letter-spacing: 5px;
    color: #aaa;
    text-transform: uppercase;
  }

  .t6-topline-rule {
    flex: 1;
    height: 1px;
    background: #e0e0d8;
  }

  .t6-hb {
    font-family: 'Fraunces', serif;
    font-weight: 100;
    font-size: 18px;
    color: #888;
    letter-spacing: 3px;
    text-transform: uppercase;
    margin-bottom: 8px;
  }

  .t6-name {
    font-family: 'Fraunces', serif;
    font-size: 52px;
    font-weight: 700;
    color: #1a1a1a;
    line-height: 0.9;
    letter-spacing: -2px;
    margin-bottom: 16px;
  }

  .t6-name em {
    font-style: italic;
    font-weight: 100;
    color: #888;
    font-size: 36px;
  }

  .t6-greeting {
    font-family: 'DM Sans', sans-serif;
    font-size: 12px;
    color: #666;
    line-height: 1.6;
    font-weight: 300;
    max-width: 280px;
  }

  .t6-bottom {}

  .t6-meta {
    display: flex;
    gap: 0;
    border-top: 1px solid #e0e0d8;
    padding-top: 16px;
    margin-bottom: 12px;
  }

  .t6-meta-item {
    flex: 1;
  }

  .t6-meta-item + .t6-meta-item {
    padding-left: 20px;
    border-left: 1px solid #e0e0d8;
    margin-left: 20px;
  }

  .t6-meta-key {
    font-family: 'Josefin Sans', sans-serif;
    font-size: 7px;
    letter-spacing: 3px;
    color: #bbb;
    text-transform: uppercase;
    margin-bottom: 3px;
  }

  .t6-meta-val {
    font-family: 'DM Sans', sans-serif;
    font-size: 12px;
    color: #333;
    font-weight: 500;
  }

  .t6-event {
    background: #f0f0ea;
    padding: 10px 14px;
    display: flex;
    align-items: flex-start;
    gap: 10px;
  }

  .t6-event-num {
    font-family: 'Fraunces', serif;
    font-size: 22px;
    font-weight: 700;
    color: #ccc;
    line-height: 1;
    flex-shrink: 0;
  }

  .t6-event-body {}

  .t6-event-key {
    font-family: 'Josefin Sans', sans-serif;
    font-size: 7px;
    letter-spacing: 3px;
    color: #aaa;
    text-transform: uppercase;
    margin-bottom: 2px;
  }

  .t6-event-val {
    font-family: 'DM Sans', sans-serif;
    font-size: 10px;
    color: #555;
    line-height: 1.4;
  }

</style>
</head>
<body>

<h1 class="page-title">Corporate Birthday Templates — 6 Designs</h1>

<div class="grid">

  <!-- ════ TEMPLATE 1: GOLD LUXURY EDITORIAL ════ -->
  <div>
    <div class="label">01 — Gold Luxury Editorial</div>
    <div class="t1">
      <div class="t1-img">
        <img src="https://images.unsplash.com/photo-1508214751196-bcfd4ca60f91?w=400&q=80" alt="Employee">
      </div>
      <div class="t1-content">
        <div class="t1-tag">Annual Celebration</div>
        <div class="t1-name">Sarah Johnson</div>
        <div class="t1-wish">Happy Birthday</div>
        <div class="t1-divider"></div>
        <div class="t1-info">
          <div class="t1-info-row">
            <span class="t1-info-label">Team</span>
            <span class="t1-info-val">Product Design</span>
          </div>
          <div class="t1-info-row">
            <span class="t1-info-label">DOB</span>
            <span class="t1-info-val">May 25, 1990</span>
          </div>
          <div class="t1-info-row">
            <span class="t1-info-label">Greeting</span>
            <span class="t1-info-val">"May your day be golden"</span>
          </div>
        </div>
        <div class="t1-event">
          <div class="t1-event-label">On This Day in History</div>
          <div class="t1-event-val">The Eiffel Tower was inaugurated in Paris, 1889 — a monument as timeless as you.</div>
        </div>
      </div>
    </div>
  </div>

  <!-- ════ TEMPLATE 2: NEON CYBERPUNK ════ -->
  <div>
    <div class="label">02 — Neon Cyberpunk</div>
    <div class="t2">
      <div class="t2-bg-lines"></div>
      <div class="t2-accent-line"></div>
      <div class="t2-glow-top"></div>
      <div class="t2-glow-bot"></div>
      <div class="t2-img">
        <img src="https://images.unsplash.com/photo-1531746020798-e6953c6e8e04?w=400&q=80" alt="Employee">
      </div>
      <div class="t2-content">
        <div class="t2-hb">Happy<br>Birthday</div>
        <div class="t2-name">Alex Rivera</div>
        <div class="t2-strip">
          <div class="t2-strip-item">
            <div class="t2-strip-label">Team</div>
            <div class="t2-strip-val">Engineering</div>
          </div>
          <div class="t2-strip-item">
            <div class="t2-strip-label">DOB</div>
            <div class="t2-strip-val">May 25, 1995</div>
          </div>
        </div>
        <div class="t2-greeting">"You don't just write code — you architect futures. Here's to another legendary year."</div>
        <div class="t2-event">
          <div class="t2-event-label">// Born on this day</div>
          <div class="t2-event-val">Apple Inc. was founded in 1976 — and great builders have been changing the world ever since.</div>
        </div>
      </div>
    </div>
  </div>

  <!-- ════ TEMPLATE 3: SOFT BOTANICAL ════ -->
  <div>
    <div class="label">03 — Soft Botanical</div>
    <div class="t3">
      <div class="t3-left">
        <img src="https://images.unsplash.com/photo-1544005313-94ddf0286df2?w=400&q=80" alt="Employee">
        <div class="t3-leaf1">🌿</div>
        <div class="t3-leaf2">🍃</div>
        <div class="t3-leaf3">🌱</div>
        <div class="t3-arch"></div>
      </div>
      <div class="t3-right">
        <div class="t3-circle-deco"></div>
        <div class="t3-circle-deco2"></div>
        <div class="t3-tag">With warm wishes</div>
        <div class="t3-hb">Happy <span>Birthday</span></div>
        <div class="t3-name">Emily Chen</div>
        <div class="t3-line"></div>
        <div class="t3-info">
          <div class="t3-info-item">
            <div class="t3-info-key">Team</div>
            <div class="t3-info-val">People & Culture</div>
          </div>
          <div class="t3-info-item">
            <div class="t3-info-key">Date of Birth</div>
            <div class="t3-info-val">May 25, 1992</div>
          </div>
        </div>
        <div class="t3-greeting">"You bring warmth, kindness, and creativity to everything you do. We're so glad to have you with us."</div>
        <div class="t3-event-box">
          <div class="t3-event-icon">🌸</div>
          <div class="t3-event-text">
            <div class="t3-event-key">Born on this day</div>
            <div class="t3-event-val">The Chelsea Flower Show first opened in London, 1913. Fitting for someone who makes every space bloom.</div>
          </div>
        </div>
      </div>
    </div>
  </div>

  <!-- ════ TEMPLATE 4: BOLD GEOMETRIC BAUHAUS ════ -->
  <div>
    <div class="label">04 — Bold Bauhaus Geometric</div>
    <div class="t4">
      <div class="t4-left"></div>
      <div class="t4-image-col">
        <img src="https://images.unsplash.com/photo-1560250097-0b93528c311a?w=400&q=80" alt="Employee">
        <div class="t4-red-bar"></div>
      </div>
      <div class="t4-content">
        <div class="t4-top-bar">
          <span class="t4-top-hb">Happy Birthday</span>
          <div class="t4-top-dot"></div>
          <span class="t4-top-team">Marketing Team</span>
        </div>
        <div class="t4-main">
          <div class="t4-name">Marcus<br>Webb</div>
          <div class="t4-bottom">
            <div class="t4-meta-row">
              <div class="t4-meta-cell">
                <div class="t4-meta-label">Date of Birth</div>
                <div class="t4-meta-val">May 25, 1988</div>
              </div>
              <div class="t4-meta-cell">
                <div class="t4-meta-label">Tenure</div>
                <div class="t4-meta-val">6 Years</div>
              </div>
            </div>
            <div class="t4-greeting">"Your ideas have always been ahead of their time — just like the day you were born."</div>
          </div>
        </div>
        <div class="t4-event-strip">
          <div class="t4-event-inner">
            <span class="t4-event-tag">On This Day</span>
            <span class="t4-event-val">Star Wars: A New Hope premiered worldwide in 1977 — a force as powerful as your presentations.</span>
          </div>
        </div>
      </div>
    </div>
  </div>

  <!-- ════ TEMPLATE 5: MIDNIGHT AURORA ════ -->
  <div>
    <div class="label">05 — Midnight Aurora</div>
    <div class="t5">
      <div class="t5-aurora"></div>
      <div class="t5-stars"></div>
      <div class="t5-main">
        <div class="t5-img">
          <img src="https://images.unsplash.com/photo-1573496359142-b8d87734a5a2?w=400&q=80" alt="Employee">
          <div class="t5-ring"></div>
        </div>
        <div class="t5-content">
          <div class="t5-label">Celebrating</div>
          <div class="t5-hb">Happy Birthday</div>
          <div class="t5-name">Priya Nair</div>
          <div class="t5-greeting">"Your brilliance lights up every room, every meeting, every idea."</div>
          <div class="t5-cards">
            <div class="t5-card">
              <div class="t5-card-label">Team</div>
              <div class="t5-card-val">Data & Analytics</div>
            </div>
            <div class="t5-card">
              <div class="t5-card-label">Date of Birth</div>
              <div class="t5-card-val">May 25, 1993</div>
            </div>
          </div>
          <div class="t5-event">
            <div class="t5-event-dot"></div>
            <div class="t5-event-body">
              <div class="t5-event-label">Born on this day</div>
              <div class="t5-event-val">The Hubble Space Telescope captured its first clear image in 1990 — much like you bring clarity to complex data.</div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>

  <!-- ════ TEMPLATE 6: MINIMALIST SCANDINAVIA ════ -->
  <div>
    <div class="label">06 — Minimalist Scandinavian</div>
    <div class="t6">
      <div class="t6-side"></div>
      <div class="t6-img-wrap">
        <img src="https://images.unsplash.com/photo-1519085360753-af0119f7cbe7?w=400&q=80" alt="Employee">
        <div class="t6-img-bottom">
          <div class="t6-img-team">Finance Team</div>
        </div>
      </div>
      <div class="t6-content">
        <div class="t6-top">
          <div class="t6-topline">
            <span class="t6-topline-text">Birthday</span>
            <div class="t6-topline-rule"></div>
          </div>
          <div class="t6-hb">Happy</div>
          <div class="t6-name">James <em>&</em><br>Olivia</div>
          <div class="t6-greeting">"Two birthdays, one incredible team. Wishing you both a wonderful day filled with joy."</div>
        </div>
        <div class="t6-bottom">
          <div class="t6-meta">
            <div class="t6-meta-item">
              <div class="t6-meta-key">Date of Birth</div>
              <div class="t6-meta-val">May 25, 1991</div>
            </div>
            <div class="t6-meta-item">
              <div class="t6-meta-key">Years at Company</div>
              <div class="t6-meta-val">4 & 7 Years</div>
            </div>
          </div>
          <div class="t6-event">
            <div class="t6-event-num">★</div>
            <div class="t6-event-body">
              <div class="t6-event-key">On this day</div>
              <div class="t6-event-val">The Golden Gate Bridge opened in San Francisco, 1937 — connecting two sides, just as you both bridge every gap in our team.</div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>

</div>
</body>
</html>
