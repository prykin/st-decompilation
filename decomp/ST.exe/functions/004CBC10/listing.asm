TLOBaseTy::AddSprInit:
004CBC10  55                        PUSH EBP
004CBC11  8B EC                     MOV EBP,ESP
004CBC13  83 EC 48                  SUB ESP,0x48
004CBC16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004CBC1B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004CBC1E  56                        PUSH ESI
004CBC1F  8D 55 BC                  LEA EDX,[EBP + -0x44]
004CBC22  8D 4D B8                  LEA ECX,[EBP + -0x48]
004CBC25  6A 00                     PUSH 0x0
004CBC27  52                        PUSH EDX
004CBC28  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004CBC2B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004CBC31  E8 BA 1B 26 00            CALL 0x0072d7f0
004CBC36  8B F0                     MOV ESI,EAX
004CBC38  83 C4 08                  ADD ESP,0x8
004CBC3B  85 F6                     TEST ESI,ESI
004CBC3D  0F 85 B0 00 00 00         JNZ 0x004cbcf3
004CBC43  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CBC46  8B 81 AC 05 00 00         MOV EAX,dword ptr [ECX + 0x5ac]
004CBC4C  83 C0 CE                  ADD EAX,-0x32
004CBC4F  83 F8 40                  CMP EAX,0x40
004CBC52  0F 87 8C 00 00 00         JA 0x004cbce4
004CBC58  33 D2                     XOR EDX,EDX
004CBC5A  8A 90 5C BD 4C 00         MOV DL,byte ptr [EAX + 0x4cbd5c]
switchD_004cbc60::switchD:
004CBC60  FF 24 95 3C BD 4C 00      JMP dword ptr [EDX*0x4 + 0x4cbd3c]
switchD_004cbc60::caseD_45:
004CBC67  E8 1A 8C F3 FF            CALL 0x00404886
004CBC6C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004CBC6F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004CBC74  33 C0                     XOR EAX,EAX
004CBC76  5E                        POP ESI
004CBC77  8B E5                     MOV ESP,EBP
004CBC79  5D                        POP EBP
004CBC7A  C3                        RET
switchD_004cbc60::caseD_4e:
004CBC7B  E8 25 9F F3 FF            CALL 0x00405ba5
004CBC80  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004CBC83  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004CBC88  33 C0                     XOR EAX,EAX
004CBC8A  5E                        POP ESI
004CBC8B  8B E5                     MOV ESP,EBP
004CBC8D  5D                        POP EBP
004CBC8E  C3                        RET
switchD_004cbc60::caseD_72:
004CBC8F  E8 D2 5B F3 FF            CALL 0x00401866
004CBC94  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004CBC97  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004CBC9C  33 C0                     XOR EAX,EAX
004CBC9E  5E                        POP ESI
004CBC9F  8B E5                     MOV ESP,EBP
004CBCA1  5D                        POP EBP
004CBCA2  C3                        RET
switchD_004cbc60::caseD_32:
004CBCA3  E8 67 76 F3 FF            CALL 0x0040330f
004CBCA8  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004CBCAB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004CBCB0  33 C0                     XOR EAX,EAX
004CBCB2  5E                        POP ESI
004CBCB3  8B E5                     MOV ESP,EBP
004CBCB5  5D                        POP EBP
004CBCB6  C3                        RET
switchD_004cbc60::caseD_52:
004CBCB7  E8 46 56 F3 FF            CALL 0x00401302
004CBCBC  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004CBCBF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004CBCC4  33 C0                     XOR EAX,EAX
004CBCC6  5E                        POP ESI
004CBCC7  8B E5                     MOV ESP,EBP
004CBCC9  5D                        POP EBP
004CBCCA  C3                        RET
switchD_004cbc60::caseD_70:
004CBCCB  E8 47 6E F3 FF            CALL 0x00402b17
004CBCD0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004CBCD3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004CBCD8  33 C0                     XOR EAX,EAX
004CBCDA  5E                        POP ESI
004CBCDB  8B E5                     MOV ESP,EBP
004CBCDD  5D                        POP EBP
004CBCDE  C3                        RET
switchD_004cbc60::caseD_69:
004CBCDF  E8 3C 56 F3 FF            CALL 0x00401320
switchD_004cbc60::caseD_33:
004CBCE4  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004CBCE7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004CBCEC  33 C0                     XOR EAX,EAX
004CBCEE  5E                        POP ESI
004CBCEF  8B E5                     MOV ESP,EBP
004CBCF1  5D                        POP EBP
004CBCF2  C3                        RET
LAB_004cbcf3:
004CBCF3  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004CBCF6  68 40 D5 7A 00            PUSH 0x7ad540
004CBCFB  68 CC 4C 7A 00            PUSH 0x7a4ccc
004CBD00  56                        PUSH ESI
004CBD01  6A 00                     PUSH 0x0
004CBD03  68 C5 02 00 00            PUSH 0x2c5
004CBD08  68 D0 D4 7A 00            PUSH 0x7ad4d0
004CBD0D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004CBD13  E8 B8 17 1E 00            CALL 0x006ad4d0
004CBD18  83 C4 18                  ADD ESP,0x18
004CBD1B  85 C0                     TEST EAX,EAX
004CBD1D  74 01                     JZ 0x004cbd20
004CBD1F  CC                        INT3
LAB_004cbd20:
004CBD20  68 C6 02 00 00            PUSH 0x2c6
004CBD25  68 D0 D4 7A 00            PUSH 0x7ad4d0
004CBD2A  6A 00                     PUSH 0x0
004CBD2C  56                        PUSH ESI
004CBD2D  E8 0E A1 1D 00            CALL 0x006a5e40
004CBD32  8B C6                     MOV EAX,ESI
004CBD34  5E                        POP ESI
004CBD35  8B E5                     MOV ESP,EBP
004CBD37  5D                        POP EBP
004CBD38  C3                        RET
