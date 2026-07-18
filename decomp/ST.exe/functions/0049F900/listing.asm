STGroupBoatC::Teleport:
0049F900  55                        PUSH EBP
0049F901  8B EC                     MOV EBP,ESP
0049F903  83 EC 68                  SUB ESP,0x68
0049F906  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049F909  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049F90F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0049F912  53                        PUSH EBX
0049F913  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049F916  56                        PUSH ESI
0049F917  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0049F91A  33 DB                     XOR EBX,EBX
0049F91C  57                        PUSH EDI
0049F91D  8D 4D 9C                  LEA ECX,[EBP + -0x64]
0049F920  8D 45 98                  LEA EAX,[EBP + -0x68]
0049F923  53                        PUSH EBX
0049F924  51                        PUSH ECX
0049F925  C7 45 F4 02 00 00 00      MOV dword ptr [EBP + -0xc],0x2
0049F92C  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
0049F92F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049F934  E8 B7 DE 28 00            CALL 0x0072d7f0
0049F939  8B F0                     MOV ESI,EAX
0049F93B  83 C4 08                  ADD ESP,0x8
0049F93E  3B F3                     CMP ESI,EBX
0049F940  0F 85 B8 01 00 00         JNZ 0x0049fafe
0049F946  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049F949  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0049F94C  3B C3                     CMP EAX,EBX
0049F94E  74 09                     JZ 0x0049f959
0049F950  83 F8 01                  CMP EAX,0x1
0049F953  0F 85 F1 00 00 00         JNZ 0x0049fa4a
LAB_0049f959:
0049F959  B9 15 00 00 00            MOV ECX,0x15
0049F95E  33 C0                     XOR EAX,EAX
0049F960  8D BE 89 00 00 00         LEA EDI,[ESI + 0x89]
0049F966  8D 96 A3 01 00 00         LEA EDX,[ESI + 0x1a3]
0049F96C  F3 AB                     STOSD.REP ES:EDI
0049F96E  8D 86 D8 02 00 00         LEA EAX,[ESI + 0x2d8]
0049F974  89 5E 65                  MOV dword ptr [ESI + 0x65],EBX
0049F977  8B 3A                     MOV EDI,dword ptr [EDX]
0049F979  8B C8                     MOV ECX,EAX
0049F97B  89 39                     MOV dword ptr [ECX],EDI
0049F97D  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
0049F980  89 79 04                  MOV dword ptr [ECX + 0x4],EDI
0049F983  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
0049F986  89 79 08                  MOV dword ptr [ECX + 0x8],EDI
0049F989  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
0049F98C  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
0049F98F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049F995  8B 00                     MOV EAX,dword ptr [EAX]
0049F997  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0049F99D  66 8B 8E DC 02 00 00      MOV CX,word ptr [ESI + 0x2dc]
0049F9A4  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0049F9A7  66 8B 86 E0 02 00 00      MOV AX,word ptr [ESI + 0x2e0]
0049F9AE  66 89 45 E8               MOV word ptr [EBP + -0x18],AX
0049F9B2  66 8B 86 E6 02 00 00      MOV AX,word ptr [ESI + 0x2e6]
0049F9B9  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0049F9BC  66 8B 96 DE 02 00 00      MOV DX,word ptr [ESI + 0x2de]
0049F9C3  66 89 45 EE               MOV word ptr [EBP + -0x12],AX
0049F9C7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049F9CA  66 89 4D E4               MOV word ptr [EBP + -0x1c],CX
0049F9CE  66 8B 8E E2 02 00 00      MOV CX,word ptr [ESI + 0x2e2]
0049F9D5  66 89 55 E6               MOV word ptr [EBP + -0x1a],DX
0049F9D9  66 8B 96 E4 02 00 00      MOV DX,word ptr [ESI + 0x2e4]
0049F9E0  85 C0                     TEST EAX,EAX
0049F9E2  66 89 4D EA               MOV word ptr [EBP + -0x16],CX
0049F9E6  66 89 55 EC               MOV word ptr [EBP + -0x14],DX
0049F9EA  7E 5E                     JLE 0x0049fa4a
LAB_0049f9ec:
0049F9EC  8D 4D F8                  LEA ECX,[EBP + -0x8]
0049F9EF  8B D3                     MOV EDX,EBX
0049F9F1  51                        PUSH ECX
0049F9F2  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049F9F5  E8 76 D2 20 00            CALL 0x006acc70
0049F9FA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049F9FD  66 3D FF FF               CMP AX,0xffff
0049FA01  74 3F                     JZ 0x0049fa42
0049FA03  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
0049FA06  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049FA0C  6A 01                     PUSH 0x1
0049FA0E  50                        PUSH EAX
0049FA0F  52                        PUSH EDX
0049FA10  E8 A5 2E F6 FF            CALL 0x004028ba
0049FA15  8B F8                     MOV EDI,EAX
0049FA17  85 FF                     TEST EDI,EDI
0049FA19  75 1A                     JNZ 0x0049fa35
0049FA1B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049FA20  68 46 0C 00 00            PUSH 0xc46
0049FA25  68 3C BE 7A 00            PUSH 0x7abe3c
0049FA2A  50                        PUSH EAX
0049FA2B  68 04 00 FE AF            PUSH 0xaffe0004
0049FA30  E8 0B 64 20 00            CALL 0x006a5e40
LAB_0049fa35:
0049FA35  8D 4D DC                  LEA ECX,[EBP + -0x24]
0049FA38  51                        PUSH ECX
0049FA39  6A 15                     PUSH 0x15
0049FA3B  8B CF                     MOV ECX,EDI
0049FA3D  E8 E4 26 F6 FF            CALL 0x00402126
LAB_0049fa42:
0049FA42  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049FA45  43                        INC EBX
0049FA46  3B D8                     CMP EBX,EAX
0049FA48  7C A2                     JL 0x0049f9ec
LAB_0049fa4a:
0049FA4A  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0049FA50  B9 19 00 00 00            MOV ECX,0x19
0049FA55  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0049FA5B  33 D2                     XOR EDX,EDX
0049FA5D  F7 F1                     DIV ECX
0049FA5F  83 FA 01                  CMP EDX,0x1
0049FA62  0F 85 81 00 00 00         JNZ 0x0049fae9
0049FA68  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049FA6B  33 DB                     XOR EBX,EBX
0049FA6D  85 C0                     TEST EAX,EAX
0049FA6F  7E 6C                     JLE 0x0049fadd
LAB_0049fa71:
0049FA71  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049FA74  8D 55 F8                  LEA EDX,[EBP + -0x8]
0049FA77  52                        PUSH EDX
0049FA78  8B D3                     MOV EDX,EBX
0049FA7A  E8 F1 D1 20 00            CALL 0x006acc70
0049FA7F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049FA82  66 3D FF FF               CMP AX,0xffff
0049FA86  74 4D                     JZ 0x0049fad5
0049FA88  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049FA8E  6A 01                     PUSH 0x1
0049FA90  50                        PUSH EAX
0049FA91  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0049FA94  50                        PUSH EAX
0049FA95  E8 20 2E F6 FF            CALL 0x004028ba
0049FA9A  8B F8                     MOV EDI,EAX
0049FA9C  85 FF                     TEST EDI,EDI
0049FA9E  75 1B                     JNZ 0x0049fabb
0049FAA0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049FAA6  68 51 0C 00 00            PUSH 0xc51
0049FAAB  68 3C BE 7A 00            PUSH 0x7abe3c
0049FAB0  51                        PUSH ECX
0049FAB1  68 04 00 FE AF            PUSH 0xaffe0004
0049FAB6  E8 85 63 20 00            CALL 0x006a5e40
LAB_0049fabb:
0049FABB  8B CF                     MOV ECX,EDI
0049FABD  E8 1A 34 F6 FF            CALL 0x00402edc
0049FAC2  83 F8 15                  CMP EAX,0x15
0049FAC5  74 16                     JZ 0x0049fadd
0049FAC7  6A 15                     PUSH 0x15
0049FAC9  8B CF                     MOV ECX,EDI
0049FACB  E8 29 53 F6 FF            CALL 0x00404df9
0049FAD0  83 F8 01                  CMP EAX,0x1
0049FAD3  74 08                     JZ 0x0049fadd
LAB_0049fad5:
0049FAD5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049FAD8  43                        INC EBX
0049FAD9  3B D8                     CMP EBX,EAX
0049FADB  7C 94                     JL 0x0049fa71
LAB_0049fadd:
0049FADD  3B 5D FC                  CMP EBX,dword ptr [EBP + -0x4]
0049FAE0  75 07                     JNZ 0x0049fae9
0049FAE2  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_0049fae9:
0049FAE9  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0049FAEC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0049faf2:
0049FAF2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049FAF5  5F                        POP EDI
0049FAF6  5E                        POP ESI
0049FAF7  5B                        POP EBX
0049FAF8  8B E5                     MOV ESP,EBP
0049FAFA  5D                        POP EBP
0049FAFB  C2 04 00                  RET 0x4
LAB_0049fafe:
0049FAFE  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0049FB01  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0049FB07  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049FB0C  74 E4                     JZ 0x0049faf2
0049FB0E  68 24 C1 7A 00            PUSH 0x7ac124
0049FB13  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049FB18  56                        PUSH ESI
0049FB19  53                        PUSH EBX
0049FB1A  68 5A 0C 00 00            PUSH 0xc5a
0049FB1F  68 3C BE 7A 00            PUSH 0x7abe3c
0049FB24  E8 A7 D9 20 00            CALL 0x006ad4d0
0049FB29  83 C4 18                  ADD ESP,0x18
0049FB2C  85 C0                     TEST EAX,EAX
0049FB2E  74 01                     JZ 0x0049fb31
0049FB30  CC                        INT3
LAB_0049fb31:
0049FB31  68 5B 0C 00 00            PUSH 0xc5b
0049FB36  68 3C BE 7A 00            PUSH 0x7abe3c
0049FB3B  53                        PUSH EBX
0049FB3C  56                        PUSH ESI
0049FB3D  E8 FE 62 20 00            CALL 0x006a5e40
0049FB42  5F                        POP EDI
0049FB43  5E                        POP ESI
0049FB44  83 C8 FF                  OR EAX,0xffffffff
0049FB47  5B                        POP EBX
0049FB48  8B E5                     MOV ESP,EBP
0049FB4A  5D                        POP EBP
0049FB4B  C2 04 00                  RET 0x4
