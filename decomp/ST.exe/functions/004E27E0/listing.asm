FUN_004e27e0:
004E27E0  55                        PUSH EBP
004E27E1  8B EC                     MOV EBP,ESP
004E27E3  51                        PUSH ECX
004E27E4  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E27E9  57                        PUSH EDI
004E27EA  8B F9                     MOV EDI,ECX
004E27EC  33 D2                     XOR EDX,EDX
004E27EE  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004E27F4  B9 4B 00 00 00            MOV ECX,0x4b
004E27F9  F7 F1                     DIV ECX
004E27FB  85 D2                     TEST EDX,EDX
004E27FD  75 42                     JNZ 0x004e2841
004E27FF  53                        PUSH EBX
004E2800  56                        PUSH ESI
004E2801  8D B7 D0 04 00 00         LEA ESI,[EDI + 0x4d0]
004E2807  BB 02 00 00 00            MOV EBX,0x2
LAB_004e280c:
004E280C  8B 06                     MOV EAX,dword ptr [ESI]
004E280E  85 C0                     TEST EAX,EAX
004E2810  74 27                     JZ 0x004e2839
004E2812  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E2818  8D 55 FC                  LEA EDX,[EBP + -0x4]
004E281B  52                        PUSH EDX
004E281C  50                        PUSH EAX
004E281D  E8 AE 3A 20 00            CALL 0x006e62d0
004E2822  85 C0                     TEST EAX,EAX
004E2824  75 0D                     JNZ 0x004e2833
004E2826  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E2829  E8 AE 06 F2 FF            CALL 0x00402edc
004E282E  83 F8 04                  CMP EAX,0x4
004E2831  74 06                     JZ 0x004e2839
LAB_004e2833:
004E2833  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_004e2839:
004E2839  83 C6 28                  ADD ESI,0x28
004E283C  4B                        DEC EBX
004E283D  75 CD                     JNZ 0x004e280c
004E283F  5E                        POP ESI
004E2840  5B                        POP EBX
LAB_004e2841:
004E2841  8B 87 20 05 00 00         MOV EAX,dword ptr [EDI + 0x520]
004E2847  85 C0                     TEST EAX,EAX
004E2849  74 42                     JZ 0x004e288d
004E284B  6A 0C                     PUSH 0xc
004E284D  8D 8F D5 01 00 00         LEA ECX,[EDI + 0x1d5]
004E2853  E8 57 1A F2 FF            CALL 0x004042af
004E2858  8B 8F F5 01 00 00         MOV ECX,dword ptr [EDI + 0x1f5]
004E285E  3B 81 C4 01 00 00         CMP EAX,dword ptr [ECX + 0x1c4]
004E2864  75 27                     JNZ 0x004e288d
004E2866  8B 87 D0 04 00 00         MOV EAX,dword ptr [EDI + 0x4d0]
004E286C  85 C0                     TEST EAX,EAX
004E286E  75 1D                     JNZ 0x004e288d
004E2870  8B 87 F8 04 00 00         MOV EAX,dword ptr [EDI + 0x4f8]
004E2876  85 C0                     TEST EAX,EAX
004E2878  75 13                     JNZ 0x004e288d
004E287A  6A 00                     PUSH 0x0
004E287C  8B CF                     MOV ECX,EDI
004E287E  C7 87 20 05 00 00 00 00 00 00  MOV dword ptr [EDI + 0x520],0x0
004E2888  E8 6A 04 F2 FF            CALL 0x00402cf7
LAB_004e288d:
004E288D  33 C0                     XOR EAX,EAX
004E288F  5F                        POP EDI
004E2890  8B E5                     MOV ESP,EBP
004E2892  5D                        POP EBP
004E2893  C3                        RET
