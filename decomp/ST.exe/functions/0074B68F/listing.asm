FUN_0074b68f:
0074B68F  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074B693  FF 70 6C                  PUSH dword ptr [EAX + 0x6c]
0074B696  8B 48 44                  MOV ECX,dword ptr [EAX + 0x44]
0074B699  49                        DEC ECX
0074B69A  FF 70 68                  PUSH dword ptr [EAX + 0x68]
0074B69D  49                        DEC ECX
0074B69E  FF 70 64                  PUSH dword ptr [EAX + 0x64]
0074B6A1  FF 70 60                  PUSH dword ptr [EAX + 0x60]
0074B6A4  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074B6A8  51                        PUSH ECX
0074B6A9  8D 88 38 FF FF FF         LEA ECX,[EAX + 0xffffff38]
0074B6AF  E8 32 FF FF FF            CALL 0x0074b5e6
0074B6B4  C2 08 00                  RET 0x8
