class StRingBuffer
{
  public:
    StRingBuffer();
    void addByte(byte val);
    byte getByte(int pos);
    String toString();
    void clear();
    int length();
  private:
    static const int iLength = 50;
    int pos = 0;
    byte data[iLength];
};

StRingBuffer::StRingBuffer()
{
  clear();
}

void StRingBuffer::clear()
{
  for (pos = 0; pos < iLength; pos++)
    data[pos] = 0;
  pos = 0;
}

void StRingBuffer::addByte(byte val)
{
  data[pos] = val;
  pos = (++pos) % iLength;
}

String StRingBuffer::toString()
{
  String myString = String((char*)data);
  if (pos > 0 && iLength > 0)
    return myString.substring(pos) + myString.substring(0, pos);
  else
    return myString;
}

byte StRingBuffer::getByte(int offset)
{
  return data[(pos - 1 + offset) % iLength];
}

int StRingBuffer::length()
{
  return iLength;
}
