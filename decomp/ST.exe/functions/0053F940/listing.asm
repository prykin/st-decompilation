ProdPanelTy::CreateSlider:
0053F940  55                        PUSH EBP
0053F941  8B EC                     MOV EBP,ESP
0053F943  81 EC 28 04 00 00         SUB ESP,0x428
0053F949  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053F94E  53                        PUSH EBX
0053F94F  56                        PUSH ESI
0053F950  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0053F953  57                        PUSH EDI
0053F954  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0053F957  8D 4D B0                  LEA ECX,[EBP + -0x50]
0053F95A  6A 00                     PUSH 0x0
0053F95C  52                        PUSH EDX
0053F95D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0053F964  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0053F967  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053F96D  E8 7E DE 1E 00            CALL 0x0072d7f0
0053F972  8B F0                     MOV ESI,EAX
0053F974  83 C4 08                  ADD ESP,0x8
0053F977  85 F6                     TEST ESI,ESI
0053F979  0F 85 44 02 00 00         JNZ 0x0053fbc3
0053F97F  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0053F982  B9 F6 00 00 00            MOV ECX,0xf6
0053F987  8D BD D8 FB FF FF         LEA EDI,[EBP + 0xfffffbd8]
0053F98D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0053F990  F3 AB                     STOSD.REP ES:EDI
0053F992  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0053F995  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0053F998  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
0053F99B  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0053F99E  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
0053F9A1  8A 0D 4C 73 80 00         MOV CL,byte ptr [0x0080734c]
0053F9A7  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
0053F9AA  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0053F9AD  BF 02 00 00 00            MOV EDI,0x2
0053F9B2  89 85 D8 FB FF FF         MOV dword ptr [EBP + 0xfffffbd8],EAX
0053F9B8  84 C9                     TEST CL,CL
0053F9BA  89 7D 84                  MOV dword ptr [EBP + -0x7c],EDI
0053F9BD  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
0053F9C0  BE 01 00 00 00            MOV ESI,0x1
0053F9C5  74 03                     JZ 0x0053f9ca
0053F9C7  89 75 A0                  MOV dword ptr [EBP + -0x60],ESI
LAB_0053f9ca:
0053F9CA  56                        PUSH ESI
0053F9CB  33 C9                     XOR ECX,ECX
0053F9CD  6A 00                     PUSH 0x0
0053F9CF  3B C6                     CMP EAX,ESI
0053F9D1  6A 00                     PUSH 0x0
0053F9D3  56                        PUSH ESI
0053F9D4  0F 94 C1                  SETZ CL
0053F9D7  6A 00                     PUSH 0x0
0053F9D9  68 BC 7A 7C 00            PUSH 0x7c7abc
0053F9DE  89 BD DC FB FF FF         MOV dword ptr [EBP + 0xfffffbdc],EDI
0053F9E4  89 BD 5C FD FF FF         MOV dword ptr [EBP + 0xfffffd5c],EDI
0053F9EA  89 8D E0 FB FF FF         MOV dword ptr [EBP + 0xfffffbe0],ECX
0053F9F0  89 BD E4 FB FF FF         MOV dword ptr [EBP + 0xfffffbe4],EDI
0053F9F6  89 B5 EC FC FF FF         MOV dword ptr [EBP + 0xfffffcec],ESI
0053F9FC  89 B5 E8 FC FF FF         MOV dword ptr [EBP + 0xfffffce8],ESI
0053FA02  E8 75 5D EC FF            CALL 0x0040577c
0053FA07  83 C4 08                  ADD ESP,0x8
0053FA0A  50                        PUSH EAX
0053FA0B  E8 F0 31 1B 00            CALL 0x006f2c00
0053FA10  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053FA16  83 C4 0C                  ADD ESP,0xc
0053FA19  50                        PUSH EAX
0053FA1A  56                        PUSH ESI
0053FA1B  E8 C0 22 1B 00            CALL 0x006f1ce0
0053FA20  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0053FA23  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0053FA26  8D 4D F8                  LEA ECX,[EBP + -0x8]
0053FA29  89 95 F0 FB FF FF         MOV dword ptr [EBP + 0xfffffbf0],EDX
0053FA2F  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0053FA32  51                        PUSH ECX
0053FA33  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053FA39  89 85 F4 FB FF FF         MOV dword ptr [EBP + 0xfffffbf4],EAX
0053FA3F  E8 9C 26 1B 00            CALL 0x006f20e0
0053FA44  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
0053FA47  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0053FA4A  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
0053FA4D  8B 53 5C                  MOV EDX,dword ptr [EBX + 0x5c]
0053FA50  89 8D E8 FB FF FF         MOV dword ptr [EBP + 0xfffffbe8],ECX
0053FA56  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
0053FA5C  85 D2                     TEST EDX,EDX
0053FA5E  74 03                     JZ 0x0053fa63
0053FA60  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
LAB_0053fa63:
0053FA63  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0053FA66  89 BD 44 FC FF FF         MOV dword ptr [EBP + 0xfffffc44],EDI
0053FA6C  03 CE                     ADD ECX,ESI
0053FA6E  BE 01 01 00 00            MOV ESI,0x101
0053FA73  89 8D EC FB FF FF         MOV dword ptr [EBP + 0xfffffbec],ECX
0053FA79  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0053FA7C  89 8D 40 FC FF FF         MOV dword ptr [EBP + 0xfffffc40],ECX
0053FA82  33 C9                     XOR ECX,ECX
0053FA84  89 8D 78 FC FF FF         MOV dword ptr [EBP + 0xfffffc78],ECX
0053FA8A  89 B5 84 FC FF FF         MOV dword ptr [EBP + 0xfffffc84],ESI
0053FA90  89 B5 60 FC FF FF         MOV dword ptr [EBP + 0xfffffc60],ESI
0053FA96  66 89 8D 90 FC FF FF      MOV word ptr [EBP + 0xfffffc90],CX
0053FA9D  66 89 8D 6C FC FF FF      MOV word ptr [EBP + 0xfffffc6c],CX
0053FAA4  BE 03 00 00 00            MOV ESI,0x3
0053FAA9  B9 2E 27 00 00            MOV ECX,0x272e
0053FAAE  89 B5 88 FC FF FF         MOV dword ptr [EBP + 0xfffffc88],ESI
0053FAB4  89 B5 64 FC FF FF         MOV dword ptr [EBP + 0xfffffc64],ESI
0053FABA  66 89 BD 92 FC FF FF      MOV word ptr [EBP + 0xfffffc92],DI
0053FAC1  66 89 BD 6E FC FF FF      MOV word ptr [EBP + 0xfffffc6e],DI
0053FAC8  89 8D 94 FC FF FF         MOV dword ptr [EBP + 0xfffffc94],ECX
0053FACE  89 8D 70 FC FF FF         MOV dword ptr [EBP + 0xfffffc70],ECX
0053FAD4  B9 5F 00 00 00            MOV ECX,0x5f
0053FAD9  8D B5 E0 FB FF FF         LEA ESI,[EBP + 0xfffffbe0]
0053FADF  8D BD 60 FD FF FF         LEA EDI,[EBP + 0xfffffd60]
0053FAE5  C7 85 48 FC FF FF 05 C0 00 00  MOV dword ptr [EBP + 0xfffffc48],0xc005
0053FAEF  C7 85 9C FC FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffc9c],0x1
0053FAF9  C7 85 68 FC FF FF 01 42 00 00  MOV dword ptr [EBP + 0xfffffc68],0x4201
0053FB03  C7 85 8C FC FF FF 02 42 00 00  MOV dword ptr [EBP + 0xfffffc8c],0x4202
0053FB0D  C7 85 F0 FC FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffcf0],0x1f4
0053FB17  C7 85 F4 FC FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffffcf4],0x32
0053FB21  F3 A5                     MOVSD.REP ES:EDI,ESI
0053FB23  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0053FB26  03 C1                     ADD EAX,ECX
0053FB28  89 85 68 FD FF FF         MOV dword ptr [EBP + 0xfffffd68],EAX
0053FB2E  A1 34 67 80 00            MOV EAX,[0x00806734]
0053FB33  85 D2                     TEST EDX,EDX
0053FB35  74 03                     JZ 0x0053fb3a
0053FB37  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_0053fb3a:
0053FB3A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0053FB3D  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0053FB40  03 C2                     ADD EAX,EDX
0053FB42  8D 95 D8 FB FF FF         LEA EDX,[EBP + 0xfffffbd8]
0053FB48  89 85 6C FD FF FF         MOV dword ptr [EBP + 0xfffffd6c],EAX
0053FB4E  6A 00                     PUSH 0x0
0053FB50  B8 2F 27 00 00            MOV EAX,0x272f
0053FB55  52                        PUSH EDX
0053FB56  8D 55 FC                  LEA EDX,[EBP + -0x4]
0053FB59  C7 85 C8 FD FF FF 06 C0 00 00  MOV dword ptr [EBP + 0xfffffdc8],0xc006
0053FB63  89 85 14 FE FF FF         MOV dword ptr [EBP + 0xfffffe14],EAX
0053FB69  89 85 F0 FD FF FF         MOV dword ptr [EBP + 0xfffffdf0],EAX
0053FB6F  8B 01                     MOV EAX,dword ptr [ECX]
0053FB71  6A 00                     PUSH 0x0
0053FB73  52                        PUSH EDX
0053FB74  6A 04                     PUSH 0x4
0053FB76  FF 50 08                  CALL dword ptr [EAX + 0x8]
0053FB79  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
0053FB7C  85 C0                     TEST EAX,EAX
0053FB7E  74 0E                     JZ 0x0053fb8e
0053FB80  A0 4C 73 80 00            MOV AL,[0x0080734c]
0053FB85  84 C0                     TEST AL,AL
0053FB87  B8 55 00 00 00            MOV EAX,0x55
0053FB8C  75 05                     JNZ 0x0053fb93
LAB_0053fb8e:
0053FB8E  B8 56 00 00 00            MOV EAX,0x56
LAB_0053fb93:
0053FB93  89 43 28                  MOV dword ptr [EBX + 0x28],EAX
0053FB96  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053FB99  85 C0                     TEST EAX,EAX
0053FB9B  74 14                     JZ 0x0053fbb1
0053FB9D  8D 4B 18                  LEA ECX,[EBX + 0x18]
0053FBA0  51                        PUSH ECX
0053FBA1  50                        PUSH EAX
0053FBA2  68 02 00 00 80            PUSH 0x80000002
0053FBA7  8B CB                     MOV ECX,EBX
0053FBA9  E8 D2 64 1A 00            CALL 0x006e6080
0053FBAE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0053fbb1:
0053FBB1  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0053FBB4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053FBBA  5F                        POP EDI
0053FBBB  5E                        POP ESI
0053FBBC  5B                        POP EBX
0053FBBD  8B E5                     MOV ESP,EBP
0053FBBF  5D                        POP EBP
0053FBC0  C2 20 00                  RET 0x20
LAB_0053fbc3:
0053FBC3  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0053FBC6  68 9C 7A 7C 00            PUSH 0x7c7a9c
0053FBCB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053FBD0  56                        PUSH ESI
0053FBD1  6A 00                     PUSH 0x0
0053FBD3  68 39 02 00 00            PUSH 0x239
0053FBD8  68 70 78 7C 00            PUSH 0x7c7870
0053FBDD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053FBE2  E8 E9 D8 16 00            CALL 0x006ad4d0
0053FBE7  83 C4 18                  ADD ESP,0x18
0053FBEA  85 C0                     TEST EAX,EAX
0053FBEC  74 01                     JZ 0x0053fbef
0053FBEE  CC                        INT3
LAB_0053fbef:
0053FBEF  68 39 02 00 00            PUSH 0x239
0053FBF4  68 70 78 7C 00            PUSH 0x7c7870
0053FBF9  6A 00                     PUSH 0x0
0053FBFB  56                        PUSH ESI
0053FBFC  E8 3F 62 16 00            CALL 0x006a5e40
0053FC01  5F                        POP EDI
0053FC02  5E                        POP ESI
0053FC03  83 C8 FF                  OR EAX,0xffffffff
0053FC06  5B                        POP EBX
0053FC07  8B E5                     MOV ESP,EBP
0053FC09  5D                        POP EBP
0053FC0A  C2 20 00                  RET 0x20
