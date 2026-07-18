FUN_004dd070:
004DD070  55                        PUSH EBP
004DD071  8B EC                     MOV EBP,ESP
004DD073  83 EC 08                  SUB ESP,0x8
004DD076  56                        PUSH ESI
004DD077  8B F1                     MOV ESI,ECX
004DD079  57                        PUSH EDI
004DD07A  83 BE D0 04 00 00 01      CMP dword ptr [ESI + 0x4d0],0x1
004DD081  0F 85 4C 01 00 00         JNZ 0x004dd1d3
004DD087  A1 84 8F 79 00            MOV EAX,[0x00798f84]
004DD08C  83 F8 01                  CMP EAX,0x1
004DD08F  0F 8E 3E 01 00 00         JLE 0x004dd1d3
004DD095  39 86 D4 04 00 00         CMP dword ptr [ESI + 0x4d4],EAX
004DD09B  0F 8D 32 01 00 00         JGE 0x004dd1d3
004DD0A1  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004DD0A6  8B 8E DC 04 00 00         MOV ECX,dword ptr [ESI + 0x4dc]
004DD0AC  8B BE D8 04 00 00         MOV EDI,dword ptr [ESI + 0x4d8]
004DD0B2  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004DD0B8  03 CF                     ADD ECX,EDI
004DD0BA  3B C1                     CMP EAX,ECX
004DD0BC  0F 82 11 01 00 00         JC 0x004dd1d3
004DD0C2  53                        PUSH EBX
004DD0C3  6A 0E                     PUSH 0xe
004DD0C5  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004DD0CB  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
004DD0D1  E8 D9 71 F2 FF            CALL 0x004042af
004DD0D6  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004DD0DC  0F BF 5E 43               MOVSX EBX,word ptr [ESI + 0x43]
004DD0E0  2B 82 08 02 00 00         SUB EAX,dword ptr [EDX + 0x208]
004DD0E6  99                        CDQ
004DD0E7  8B C8                     MOV ECX,EAX
004DD0E9  8B 86 A9 02 00 00         MOV EAX,dword ptr [ESI + 0x2a9]
004DD0EF  33 CA                     XOR ECX,EDX
004DD0F1  2B C3                     SUB EAX,EBX
004DD0F3  2B CA                     SUB ECX,EDX
004DD0F5  0F AF C1                  IMUL EAX,ECX
004DD0F8  89 8E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],ECX
004DD0FE  8B 3D 84 8F 79 00         MOV EDI,dword ptr [0x00798f84]
004DD104  99                        CDQ
004DD105  F7 FF                     IDIV EDI
004DD107  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
004DD10B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004DD10E  8B 86 AD 02 00 00         MOV EAX,dword ptr [ESI + 0x2ad]
004DD114  2B C2                     SUB EAX,EDX
004DD116  0F AF C1                  IMUL EAX,ECX
004DD119  99                        CDQ
004DD11A  F7 FF                     IDIV EDI
004DD11C  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
004DD120  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004DD123  8B 86 A5 02 00 00         MOV EAX,dword ptr [ESI + 0x2a5]
004DD129  2B C2                     SUB EAX,EDX
004DD12B  0F AF C1                  IMUL EAX,ECX
004DD12E  99                        CDQ
004DD12F  F7 FF                     IDIV EDI
004DD131  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004DD134  03 DA                     ADD EBX,EDX
004DD136  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004DD139  89 9E E4 04 00 00         MOV dword ptr [ESI + 0x4e4],EBX
004DD13F  8B C8                     MOV ECX,EAX
004DD141  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
004DD145  03 C8                     ADD ECX,EAX
004DD147  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
004DD14B  89 8E E0 04 00 00         MOV dword ptr [ESI + 0x4e0],ECX
004DD151  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004DD154  03 C1                     ADD EAX,ECX
004DD156  51                        PUSH ECX
004DD157  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004DD15A  89 86 E8 04 00 00         MOV dword ptr [ESI + 0x4e8],EAX
004DD160  DB 45 F8                  FILD dword ptr [EBP + -0x8]
004DD163  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004DD169  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004DD16F  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004DD175  D9 1C 24                  FSTP float ptr [ESP]
004DD178  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004DD17B  51                        PUSH ECX
004DD17C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004DD182  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004DD188  D9 1C 24                  FSTP float ptr [ESP]
004DD18B  DB 86 E0 04 00 00         FILD dword ptr [ESI + 0x4e0]
004DD191  51                        PUSH ECX
004DD192  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004DD198  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004DD19E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004DD1A4  D9 1C 24                  FSTP float ptr [ESP]
004DD1A7  E8 2D 74 F2 FF            CALL 0x004045d9
004DD1AC  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004DD1B2  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
004DD1B8  5B                        POP EBX
004DD1B9  8B 14 85 80 8F 79 00      MOV EDX,dword ptr [EAX*0x4 + 0x798f80]
004DD1C0  4A                        DEC EDX
004DD1C1  3B CA                     CMP ECX,EDX
004DD1C3  7C 0E                     JL 0x004dd1d3
004DD1C5  83 F8 01                  CMP EAX,0x1
004DD1C8  75 09                     JNZ 0x004dd1d3
004DD1CA  6A 00                     PUSH 0x0
004DD1CC  8B CE                     MOV ECX,ESI
004DD1CE  E8 2B 6D F2 FF            CALL 0x00403efe
LAB_004dd1d3:
004DD1D3  5F                        POP EDI
004DD1D4  33 C0                     XOR EAX,EAX
004DD1D6  5E                        POP ESI
004DD1D7  8B E5                     MOV ESP,EBP
004DD1D9  5D                        POP EBP
004DD1DA  C3                        RET
