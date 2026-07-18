FUN_006c4480:
006C4480  55                        PUSH EBP
006C4481  8B EC                     MOV EBP,ESP
006C4483  56                        PUSH ESI
006C4484  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C4487  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C448E  74 0D                     JZ 0x006c449d
006C4490  8D 86 F0 04 00 00         LEA EAX,[ESI + 0x4f0]
006C4496  50                        PUSH EAX
006C4497  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006c449d:
006C449D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C44A0  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
006C44A3  89 08                     MOV dword ptr [EAX],ECX
006C44A5  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006C44A8  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006C44AB  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006C44AE  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006C44B1  8B 96 C0 04 00 00         MOV EDX,dword ptr [ESI + 0x4c0]
006C44B7  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006C44BA  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006C44BD  A9 00 00 00 04            TEST EAX,0x4000000
006C44C2  74 0D                     JZ 0x006c44d1
006C44C4  81 C6 F0 04 00 00         ADD ESI,0x4f0
006C44CA  56                        PUSH ESI
006C44CB  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006c44d1:
006C44D1  5E                        POP ESI
006C44D2  5D                        POP EBP
006C44D3  C2 08 00                  RET 0x8
