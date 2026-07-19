STBoatC::BackDismant:
0047FAD0  55                        PUSH EBP
0047FAD1  8B EC                     MOV EBP,ESP
0047FAD3  53                        PUSH EBX
0047FAD4  56                        PUSH ESI
0047FAD5  8B F1                     MOV ESI,ECX
0047FAD7  33 DB                     XOR EBX,EBX
0047FAD9  57                        PUSH EDI
0047FADA  8B 86 C3 06 00 00         MOV EAX,dword ptr [ESI + 0x6c3]
0047FAE0  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
0047FAE6  83 F8 06                  CMP EAX,0x6
0047FAE9  0F 87 25 02 00 00         JA 0x0047fd14
switchD_0047faef::switchD:
0047FAEF  FF 24 85 44 FD 47 00      JMP dword ptr [EAX*0x4 + 0x47fd44]
switchD_0047faef::caseD_0:
0047FAF6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047FAF9  8B CE                     MOV ECX,ESI
0047FAFB  50                        PUSH EAX
0047FAFC  E8 EF 42 F8 FF            CALL 0x00403df0
0047FB01  85 C0                     TEST EAX,EAX
0047FB03  0F 85 CE 00 00 00         JNZ 0x0047fbd7
0047FB09  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047FB10  66 8B 8E AD 06 00 00      MOV CX,word ptr [ESI + 0x6ad]
0047FB17  66 8B 96 AB 06 00 00      MOV DX,word ptr [ESI + 0x6ab]
0047FB1E  66 3B C3                  CMP AX,BX
0047FB21  7C 52                     JL 0x0047fb75
0047FB23  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047FB2A  66 3B C7                  CMP AX,DI
0047FB2D  7D 46                     JGE 0x0047fb75
0047FB2F  66 3B D3                  CMP DX,BX
0047FB32  7C 41                     JL 0x0047fb75
0047FB34  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047FB3B  7D 38                     JGE 0x0047fb75
0047FB3D  66 3B CB                  CMP CX,BX
0047FB40  7C 33                     JL 0x0047fb75
0047FB42  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047FB49  7D 2A                     JGE 0x0047fb75
0047FB4B  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047FB52  0F BF C9                  MOVSX ECX,CX
0047FB55  0F AF D9                  IMUL EBX,ECX
0047FB58  0F BF CF                  MOVSX ECX,DI
0047FB5B  0F BF D2                  MOVSX EDX,DX
0047FB5E  0F AF CA                  IMUL ECX,EDX
0047FB61  0F BF C0                  MOVSX EAX,AX
0047FB64  03 D9                     ADD EBX,ECX
0047FB66  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0047FB6C  03 D8                     ADD EBX,EAX
0047FB6E  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
0047FB71  33 DB                     XOR EBX,EBX
0047FB73  EB 02                     JMP 0x0047fb77
LAB_0047fb75:
0047FB75  33 C9                     XOR ECX,ECX
LAB_0047fb77:
0047FB77  3B CB                     CMP ECX,EBX
0047FB79  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047FB7C  74 20                     JZ 0x0047fb9e
0047FB7E  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0047FB81  8B 86 AF 06 00 00         MOV EAX,dword ptr [ESI + 0x6af]
0047FB87  3B D0                     CMP EDX,EAX
0047FB89  75 13                     JNZ 0x0047fb9e
0047FB8B  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
0047FB8E  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0047FB91  3B C2                     CMP EAX,EDX
0047FB93  75 09                     JNZ 0x0047fb9e
0047FB95  E8 80 18 F8 FF            CALL 0x0040141a
0047FB9A  85 C0                     TEST EAX,EAX
0047FB9C  75 16                     JNZ 0x0047fbb4
LAB_0047fb9e:
0047FB9E  8B 96 AF 06 00 00         MOV EDX,dword ptr [ESI + 0x6af]
0047FBA4  8D 4D 08                  LEA ECX,[EBP + 0x8]
0047FBA7  51                        PUSH ECX
0047FBA8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047FBAE  52                        PUSH EDX
0047FBAF  E8 1C 67 26 00            CALL 0x006e62d0
LAB_0047fbb4:
0047FBB4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047FBB7  3B C3                     CMP EAX,EBX
0047FBB9  74 13                     JZ 0x0047fbce
0047FBBB  8B 88 B0 04 00 00         MOV ECX,dword ptr [EAX + 0x4b0]
0047FBC1  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0047FBC4  3B CA                     CMP ECX,EDX
0047FBC6  75 06                     JNZ 0x0047fbce
0047FBC8  89 98 B0 04 00 00         MOV dword ptr [EAX + 0x4b0],EBX
LAB_0047fbce:
0047FBCE  5F                        POP EDI
0047FBCF  5E                        POP ESI
0047FBD0  33 C0                     XOR EAX,EAX
0047FBD2  5B                        POP EBX
0047FBD3  5D                        POP EBP
0047FBD4  C2 04 00                  RET 0x4
LAB_0047fbd7:
0047FBD7  5F                        POP EDI
0047FBD8  5E                        POP ESI
0047FBD9  B8 02 00 00 00            MOV EAX,0x2
0047FBDE  5B                        POP EBX
0047FBDF  5D                        POP EBP
0047FBE0  C2 04 00                  RET 0x4
switchD_0047faef::caseD_3:
0047FBE3  8B 16                     MOV EDX,dword ptr [ESI]
0047FBE5  8B CE                     MOV ECX,ESI
0047FBE7  C7 86 C3 06 00 00 05 00 00 00  MOV dword ptr [ESI + 0x6c3],0x5
0047FBF1  89 9E C7 06 00 00         MOV dword ptr [ESI + 0x6c7],EBX
0047FBF7  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0047FBFD  F7 D8                     NEG EAX
0047FBFF  1B C0                     SBB EAX,EAX
0047FC01  5F                        POP EDI
0047FC02  24 FD                     AND AL,0xfd
0047FC04  5E                        POP ESI
0047FC05  83 C0 02                  ADD EAX,0x2
0047FC08  5B                        POP EBX
0047FC09  5D                        POP EBP
0047FC0A  C2 04 00                  RET 0x4
switchD_0047faef::caseD_4:
0047FC0D  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047FC14  66 8B 8E AD 06 00 00      MOV CX,word ptr [ESI + 0x6ad]
0047FC1B  66 8B 96 AB 06 00 00      MOV DX,word ptr [ESI + 0x6ab]
0047FC22  66 3B C3                  CMP AX,BX
0047FC25  7C 52                     JL 0x0047fc79
0047FC27  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047FC2E  66 3B C7                  CMP AX,DI
0047FC31  7D 46                     JGE 0x0047fc79
0047FC33  66 3B D3                  CMP DX,BX
0047FC36  7C 41                     JL 0x0047fc79
0047FC38  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047FC3F  7D 38                     JGE 0x0047fc79
0047FC41  66 3B CB                  CMP CX,BX
0047FC44  7C 33                     JL 0x0047fc79
0047FC46  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047FC4D  7D 2A                     JGE 0x0047fc79
0047FC4F  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047FC56  0F BF C9                  MOVSX ECX,CX
0047FC59  0F AF D9                  IMUL EBX,ECX
0047FC5C  0F BF CF                  MOVSX ECX,DI
0047FC5F  0F BF D2                  MOVSX EDX,DX
0047FC62  0F AF CA                  IMUL ECX,EDX
0047FC65  0F BF C0                  MOVSX EAX,AX
0047FC68  03 D9                     ADD EBX,ECX
0047FC6A  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0047FC70  03 D8                     ADD EBX,EAX
0047FC72  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
0047FC75  33 DB                     XOR EBX,EBX
0047FC77  EB 02                     JMP 0x0047fc7b
LAB_0047fc79:
0047FC79  33 C9                     XOR ECX,ECX
LAB_0047fc7b:
0047FC7B  3B CB                     CMP ECX,EBX
0047FC7D  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047FC80  74 20                     JZ 0x0047fca2
0047FC82  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0047FC85  8B 86 AF 06 00 00         MOV EAX,dword ptr [ESI + 0x6af]
0047FC8B  3B D0                     CMP EDX,EAX
0047FC8D  75 13                     JNZ 0x0047fca2
0047FC8F  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
0047FC92  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0047FC95  3B C2                     CMP EAX,EDX
0047FC97  75 09                     JNZ 0x0047fca2
0047FC99  E8 7C 17 F8 FF            CALL 0x0040141a
0047FC9E  85 C0                     TEST EAX,EAX
0047FCA0  75 16                     JNZ 0x0047fcb8
LAB_0047fca2:
0047FCA2  8B 96 AF 06 00 00         MOV EDX,dword ptr [ESI + 0x6af]
0047FCA8  8D 4D 08                  LEA ECX,[EBP + 0x8]
0047FCAB  51                        PUSH ECX
0047FCAC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047FCB2  52                        PUSH EDX
0047FCB3  E8 18 66 26 00            CALL 0x006e62d0
LAB_0047fcb8:
0047FCB8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047FCBB  3B CB                     CMP ECX,EBX
0047FCBD  74 06                     JZ 0x0047fcc5
0047FCBF  56                        PUSH ESI
0047FCC0  E8 79 61 F8 FF            CALL 0x00405e3e
LAB_0047fcc5:
0047FCC5  83 BE B9 06 00 00 01      CMP dword ptr [ESI + 0x6b9],0x1
0047FCCC  75 12                     JNZ 0x0047fce0
0047FCCE  C7 86 C3 06 00 00 05 00 00 00  MOV dword ptr [ESI + 0x6c3],0x5
0047FCD8  89 9E C7 06 00 00         MOV dword ptr [ESI + 0x6c7],EBX
0047FCDE  EB 0A                     JMP 0x0047fcea
LAB_0047fce0:
0047FCE0  C7 86 C3 06 00 00 06 00 00 00  MOV dword ptr [ESI + 0x6c3],0x6
LAB_0047fcea:
0047FCEA  8B 06                     MOV EAX,dword ptr [ESI]
0047FCEC  8B CE                     MOV ECX,ESI
0047FCEE  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0047FCF4  F7 D8                     NEG EAX
0047FCF6  1B C0                     SBB EAX,EAX
0047FCF8  5F                        POP EDI
0047FCF9  24 FD                     AND AL,0xfd
0047FCFB  5E                        POP ESI
0047FCFC  83 C0 02                  ADD EAX,0x2
0047FCFF  5B                        POP EBX
0047FD00  5D                        POP EBP
0047FD01  C2 04 00                  RET 0x4
switchD_0047faef::caseD_5:
0047FD04  6A 02                     PUSH 0x2
0047FD06  8B CE                     MOV ECX,ESI
0047FD08  E8 12 3F F8 FF            CALL 0x00403c1f
0047FD0D  5F                        POP EDI
0047FD0E  5E                        POP ESI
0047FD0F  5B                        POP EBX
0047FD10  5D                        POP EBP
0047FD11  C2 04 00                  RET 0x4
switchD_0047faef::default:
0047FD14  68 30 B8 7A 00            PUSH 0x7ab830
0047FD19  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047FD1E  53                        PUSH EBX
0047FD1F  53                        PUSH EBX
0047FD20  68 30 3B 00 00            PUSH 0x3b30
0047FD25  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047FD2A  E8 A1 D7 22 00            CALL 0x006ad4d0
0047FD2F  83 C4 18                  ADD ESP,0x18
0047FD32  85 C0                     TEST EAX,EAX
0047FD34  74 01                     JZ 0x0047fd37
0047FD36  CC                        INT3
LAB_0047fd37:
0047FD37  5F                        POP EDI
0047FD38  5E                        POP ESI
0047FD39  83 C8 FF                  OR EAX,0xffffffff
0047FD3C  5B                        POP EBX
0047FD3D  5D                        POP EBP
0047FD3E  C2 04 00                  RET 0x4
