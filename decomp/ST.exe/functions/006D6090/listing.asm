FUN_006d6090:
006D6090  53                        PUSH EBX
006D6091  56                        PUSH ESI
006D6092  57                        PUSH EDI
006D6093  8B F1                     MOV ESI,ECX
006D6095  33 FF                     XOR EDI,EDI
006D6097  3B F7                     CMP ESI,EDI
006D6099  74 05                     JZ 0x006d60a0
006D609B  8D 5E 10                  LEA EBX,[ESI + 0x10]
006D609E  EB 02                     JMP 0x006d60a2
LAB_006d60a0:
006D60A0  33 DB                     XOR EBX,EBX
LAB_006d60a2:
006D60A2  53                        PUSH EBX
006D60A3  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006D60A9  39 7E 2C                  CMP dword ptr [ESI + 0x2c],EDI
006D60AC  74 3B                     JZ 0x006d60e9
LAB_006d60ae:
006D60AE  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
006D60B1  39 B8 10 03 00 00         CMP dword ptr [EAX + 0x310],EDI
006D60B7  75 10                     JNZ 0x006d60c9
006D60B9  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006D60BC  3B C7                     CMP EAX,EDI
006D60BE  74 09                     JZ 0x006d60c9
006D60C0  8B 08                     MOV ECX,dword ptr [EAX]
006D60C2  50                        PUSH EAX
006D60C3  FF 51 08                  CALL dword ptr [ECX + 0x8]
006D60C6  89 7E 64                  MOV dword ptr [ESI + 0x64],EDI
LAB_006d60c9:
006D60C9  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
006D60CC  3B CF                     CMP ECX,EDI
006D60CE  74 14                     JZ 0x006d60e4
006D60D0  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006D60D3  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
006D60D6  48                        DEC EAX
006D60D7  89 56 28                  MOV dword ptr [ESI + 0x28],EDX
006D60DA  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
006D60DD  8B 01                     MOV EAX,dword ptr [ECX]
006D60DF  6A 01                     PUSH 0x1
006D60E1  FF 50 54                  CALL dword ptr [EAX + 0x54]
LAB_006d60e4:
006D60E4  39 7E 2C                  CMP dword ptr [ESI + 0x2c],EDI
006D60E7  75 C5                     JNZ 0x006d60ae
LAB_006d60e9:
006D60E9  53                        PUSH EBX
006D60EA  89 7E 3C                  MOV dword ptr [ESI + 0x3c],EDI
006D60ED  89 7E 64                  MOV dword ptr [ESI + 0x64],EDI
006D60F0  89 7E 6C                  MOV dword ptr [ESI + 0x6c],EDI
006D60F3  89 7E 68                  MOV dword ptr [ESI + 0x68],EDI
006D60F6  89 7E 70                  MOV dword ptr [ESI + 0x70],EDI
006D60F9  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D60FF  5F                        POP EDI
006D6100  5E                        POP ESI
006D6101  5B                        POP EBX
006D6102  C3                        RET
