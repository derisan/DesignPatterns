#pragma once

constexpr int kMaxBullets = 10;

class Gun
{
public:
  int GetBullets() const { return mBullets; }

  void IncreamentBullet() 
  { 
    ++mBullets; 
    if (mBullets > kMaxBullets)
    {
      mBullets = kMaxBullets;
    }
  }

  void DecreamentBullet() 
  { 
    --mBullets; 
    if (mBullets < 0)
    {
      mBullets = 0;
    }
  }

private:
  int mBullets = kMaxBullets;
};