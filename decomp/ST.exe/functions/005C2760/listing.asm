FUN_005c2760:
005C2760  55                        PUSH EBP
005C2761  8B EC                     MOV EBP,ESP
005C2763  83 EC 28                  SUB ESP,0x28
005C2766  56                        PUSH ESI
005C2767  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005C276D  8B F0                     MOV ESI,EAX
005C276F  A1 5C 17 81 00            MOV EAX,[0x0081175c]
005C2774  85 C0                     TEST EAX,EAX
005C2776  0F 84 E3 00 00 00         JZ 0x005c285f
005C277C  8B 15 54 17 81 00         MOV EDX,dword ptr [0x00811754]
005C2782  8B C6                     MOV EAX,ESI
005C2784  2B C2                     SUB EAX,EDX
005C2786  83 F8 64                  CMP EAX,0x64
005C2789  0F 82 D0 00 00 00         JC 0x005c285f
005C278F  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
005C2795  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
005C279B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C27A0  51                        PUSH ECX
005C27A1  52                        PUSH EDX
005C27A2  6A 00                     PUSH 0x0
005C27A4  6A 00                     PUSH 0x0
005C27A6  50                        PUSH EAX
005C27A7  E8 D4 37 0F 00            CALL 0x006b5f80
005C27AC  A1 5C 17 81 00            MOV EAX,[0x0081175c]
005C27B1  0F BF 48 29               MOVSX ECX,word ptr [EAX + 0x29]
005C27B5  51                        PUSH ECX
005C27B6  50                        PUSH EAX
005C27B7  E8 E4 8B 14 00            CALL 0x0070b3a0
005C27BC  50                        PUSH EAX
005C27BD  6A 06                     PUSH 0x6
005C27BF  6A 14                     PUSH 0x14
005C27C1  6A 15                     PUSH 0x15
005C27C3  E8 70 0F E4 FF            CALL 0x00403738
005C27C8  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005C27CE  83 C4 18                  ADD ESP,0x18
005C27D1  6A 00                     PUSH 0x0
005C27D3  6A 00                     PUSH 0x0
005C27D5  52                        PUSH EDX
005C27D6  E8 95 8B 0F 00            CALL 0x006bb370
005C27DB  A1 5C 17 81 00            MOV EAX,[0x0081175c]
005C27E0  66 FF 40 29               INC word ptr [EAX + 0x29]
005C27E4  A1 5C 17 81 00            MOV EAX,[0x0081175c]
005C27E9  66 8B 48 29               MOV CX,word ptr [EAX + 0x29]
005C27ED  66 3B 48 23               CMP CX,word ptr [EAX + 0x23]
005C27F1  7C 06                     JL 0x005c27f9
005C27F3  66 C7 40 29 00 00         MOV word ptr [EAX + 0x29],0x0
LAB_005c27f9:
005C27F9  A0 50 17 81 00            MOV AL,[0x00811750]
005C27FE  84 C0                     TEST AL,AL
005C2800  74 57                     JZ 0x005c2859
005C2802  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C2807  84 C0                     TEST AL,AL
005C2809  74 4E                     JZ 0x005c2859
005C280B  8B 15 D5 7D 80 00         MOV EDX,dword ptr [0x00807dd5]
005C2811  57                        PUSH EDI
005C2812  B9 09 00 00 00            MOV ECX,0x9
005C2817  33 C0                     XOR EAX,EAX
005C2819  8D 7D D8                  LEA EDI,[EBP + -0x28]
005C281C  6A FF                     PUSH -0x1
005C281E  F3 AB                     STOSD.REP ES:EDI
005C2820  8B 0D 54 87 80 00         MOV ECX,dword ptr [0x00808754]
005C2826  6A 01                     PUSH 0x1
005C2828  C1 EA 10                  SHR EDX,0x10
005C282B  66 AB                     STOSW ES:EDI
005C282D  A0 3B 73 80 00            MOV AL,[0x0080733b]
005C2832  66 89 55 D8               MOV word ptr [EBP + -0x28],DX
005C2836  8D 55 D8                  LEA EDX,[EBP + -0x28]
005C2839  6A 26                     PUSH 0x26
005C283B  88 45 E4                  MOV byte ptr [EBP + -0x1c],AL
005C283E  A1 64 17 81 00            MOV EAX,[0x00811764]
005C2843  52                        PUSH EDX
005C2844  6A 1A                     PUSH 0x1a
005C2846  6A 00                     PUSH 0x0
005C2848  50                        PUSH EAX
005C2849  C6 45 DA 00               MOV byte ptr [EBP + -0x26],0x0
005C284D  89 4D E6                  MOV dword ptr [EBP + -0x1a],ECX
005C2850  E8 0B 2B 15 00            CALL 0x00715360
005C2855  83 C4 1C                  ADD ESP,0x1c
005C2858  5F                        POP EDI
LAB_005c2859:
005C2859  89 35 54 17 81 00         MOV dword ptr [0x00811754],ESI
LAB_005c285f:
005C285F  5E                        POP ESI
005C2860  8B E5                     MOV ESP,EBP
005C2862  5D                        POP EBP
005C2863  C2 04 00                  RET 0x4
