FUN_004e7fc0:
004E7FC0  55                        PUSH EBP
004E7FC1  8B EC                     MOV EBP,ESP
004E7FC3  53                        PUSH EBX
004E7FC4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E7FC7  56                        PUSH ESI
004E7FC8  57                        PUSH EDI
004E7FC9  BF FC A3 79 00            MOV EDI,0x79a3fc
004E7FCE  B8 54 00 00 00            MOV EAX,0x54
004E7FD3  8B F7                     MOV ESI,EDI
LAB_004e7fd5:
004E7FD5  8B 0E                     MOV ECX,dword ptr [ESI]
004E7FD7  33 D2                     XOR EDX,EDX
004E7FD9  85 C9                     TEST ECX,ECX
004E7FDB  74 14                     JZ 0x004e7ff1
004E7FDD  8B CF                     MOV ECX,EDI
LAB_004e7fdf:
004E7FDF  83 FA 0F                  CMP EDX,0xf
004E7FE2  7D 0D                     JGE 0x004e7ff1
004E7FE4  39 19                     CMP dword ptr [ECX],EBX
004E7FE6  74 18                     JZ 0x004e8000
004E7FE8  83 C1 04                  ADD ECX,0x4
004E7FEB  42                        INC EDX
004E7FEC  83 39 00                  CMP dword ptr [ECX],0x0
004E7FEF  75 EE                     JNZ 0x004e7fdf
LAB_004e7ff1:
004E7FF1  83 C6 3C                  ADD ESI,0x3c
004E7FF4  40                        INC EAX
004E7FF5  83 C7 3C                  ADD EDI,0x3c
004E7FF8  81 FE 64 A5 79 00         CMP ESI,0x79a564
004E7FFE  7E D5                     JLE 0x004e7fd5
LAB_004e8000:
004E8000  5F                        POP EDI
004E8001  5E                        POP ESI
004E8002  5B                        POP EBX
004E8003  5D                        POP EBP
004E8004  C2 08 00                  RET 0x8
