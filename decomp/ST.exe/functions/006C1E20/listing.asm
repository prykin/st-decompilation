FUN_006c1e20:
006C1E20  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C1E25  85 C0                     TEST EAX,EAX
006C1E27  0F 84 C4 00 00 00         JZ 0x006c1ef1
006C1E2D  A1 C0 68 85 00            MOV EAX,[0x008568c0]
006C1E32  85 C0                     TEST EAX,EAX
006C1E34  0F 84 B7 00 00 00         JZ 0x006c1ef1
006C1E3A  56                        PUSH ESI
006C1E3B  8B 35 8C BB 85 00         MOV ESI,dword ptr [0x0085bb8c]
006C1E41  68 80 68 85 00            PUSH 0x856880
006C1E46  FF D6                     CALL ESI
006C1E48  A1 C4 68 85 00            MOV EAX,[0x008568c4]
006C1E4D  85 C0                     TEST EAX,EAX
006C1E4F  0F 85 90 00 00 00         JNZ 0x006c1ee5
006C1E55  57                        PUSH EDI
006C1E56  68 98 68 85 00            PUSH 0x856898
006C1E5B  FF D6                     CALL ESI
006C1E5D  68 F4 4F 85 00            PUSH 0x854ff4
006C1E62  E8 29 7A FF FF            CALL 0x006b9890
006C1E67  BE 04 50 85 00            MOV ESI,0x855004
LAB_006c1e6c:
006C1E6C  8B 46 F4                  MOV EAX,dword ptr [ESI + -0xc]
006C1E6F  8D 7E F4                  LEA EDI,[ESI + -0xc]
006C1E72  A8 01                     TEST AL,0x1
006C1E74  74 36                     JZ 0x006c1eac
006C1E76  83 E0 08                  AND EAX,0x8
006C1E79  89 07                     MOV dword ptr [EDI],EAX
006C1E7B  8B 06                     MOV EAX,dword ptr [ESI]
006C1E7D  85 C0                     TEST EAX,EAX
006C1E7F  74 22                     JZ 0x006c1ea3
006C1E81  8B 08                     MOV ECX,dword ptr [EAX]
006C1E83  50                        PUSH EAX
006C1E84  FF 51 48                  CALL dword ptr [ECX + 0x48]
006C1E87  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C1E8A  85 C0                     TEST EAX,EAX
006C1E8C  74 0D                     JZ 0x006c1e9b
006C1E8E  8B 10                     MOV EDX,dword ptr [EAX]
006C1E90  50                        PUSH EAX
006C1E91  FF 52 08                  CALL dword ptr [EDX + 0x8]
006C1E94  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
LAB_006c1e9b:
006C1E9B  8B 06                     MOV EAX,dword ptr [ESI]
006C1E9D  50                        PUSH EAX
006C1E9E  8B 08                     MOV ECX,dword ptr [EAX]
006C1EA0  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_006c1ea3:
006C1EA3  B9 31 00 00 00            MOV ECX,0x31
006C1EA8  33 C0                     XOR EAX,EAX
006C1EAA  F3 AB                     STOSD.REP ES:EDI
LAB_006c1eac:
006C1EAC  81 C6 C4 00 00 00         ADD ESI,0xc4
006C1EB2  81 FE 84 68 85 00         CMP ESI,0x856884
006C1EB8  7C B2                     JL 0x006c1e6c
006C1EBA  68 98 68 85 00            PUSH 0x856898
006C1EBF  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C1EC5  8B 15 C0 68 85 00         MOV EDX,dword ptr [0x008568c0]
006C1ECB  52                        PUSH EDX
006C1ECC  FF 15 7C BB 85 00         CALL dword ptr [0x0085bb7c]
006C1ED2  8B 0D C4 68 85 00         MOV ECX,dword ptr [0x008568c4]
006C1ED8  33 C0                     XOR EAX,EAX
006C1EDA  85 C9                     TEST ECX,ECX
006C1EDC  0F 94 C0                  SETZ AL
006C1EDF  A3 C4 68 85 00            MOV [0x008568c4],EAX
006C1EE4  5F                        POP EDI
LAB_006c1ee5:
006C1EE5  68 80 68 85 00            PUSH 0x856880
006C1EEA  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C1EF0  5E                        POP ESI
LAB_006c1ef1:
006C1EF1  C3                        RET
