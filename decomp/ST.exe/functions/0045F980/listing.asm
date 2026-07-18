FUN_0045f980:
0045F980  55                        PUSH EBP
0045F981  8B EC                     MOV EBP,ESP
0045F983  83 EC 0C                  SUB ESP,0xc
0045F986  53                        PUSH EBX
0045F987  56                        PUSH ESI
0045F988  8B F1                     MOV ESI,ECX
0045F98A  57                        PUSH EDI
0045F98B  83 BE E8 00 00 00 01      CMP dword ptr [ESI + 0xe8],0x1
0045F992  75 0E                     JNZ 0x0045f9a2
0045F994  E8 B4 37 FA FF            CALL 0x0040314d
0045F999  5F                        POP EDI
0045F99A  5E                        POP ESI
0045F99B  33 C0                     XOR EAX,EAX
0045F99D  5B                        POP EBX
0045F99E  8B E5                     MOV ESP,EBP
0045F9A0  5D                        POP EBP
0045F9A1  C3                        RET
LAB_0045f9a2:
0045F9A2  E8 9D 40 FA FF            CALL 0x00403a44
0045F9A7  83 F8 01                  CMP EAX,0x1
0045F9AA  75 09                     JNZ 0x0045f9b5
0045F9AC  5F                        POP EDI
0045F9AD  5E                        POP ESI
0045F9AE  33 C0                     XOR EAX,EAX
0045F9B0  5B                        POP EBX
0045F9B1  8B E5                     MOV ESP,EBP
0045F9B3  5D                        POP EBP
0045F9B4  C3                        RET
LAB_0045f9b5:
0045F9B5  83 F8 02                  CMP EAX,0x2
0045F9B8  0F 85 29 01 00 00         JNZ 0x0045fae7
0045F9BE  8D 45 F4                  LEA EAX,[EBP + -0xc]
0045F9C1  8D 4D F8                  LEA ECX,[EBP + -0x8]
0045F9C4  50                        PUSH EAX
0045F9C5  8D 55 FC                  LEA EDX,[EBP + -0x4]
0045F9C8  51                        PUSH ECX
0045F9C9  52                        PUSH EDX
0045F9CA  8B CE                     MOV ECX,ESI
0045F9CC  E8 65 5D FA FF            CALL 0x00405736
0045F9D1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0045F9D4  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0045F9D7  8B 06                     MOV EAX,dword ptr [ESI]
0045F9D9  51                        PUSH ECX
0045F9DA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0045F9DD  52                        PUSH EDX
0045F9DE  51                        PUSH ECX
0045F9DF  8B CE                     MOV ECX,ESI
0045F9E1  FF 50 18                  CALL dword ptr [EAX + 0x18]
0045F9E4  83 F8 01                  CMP EAX,0x1
0045F9E7  0F 85 8D 00 00 00         JNZ 0x0045fa7a
0045F9ED  8B CE                     MOV ECX,ESI
0045F9EF  E8 58 4C FA FF            CALL 0x0040464c
0045F9F4  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0045F9F7  8A 86 8E 00 00 00         MOV AL,byte ptr [ESI + 0x8e]
0045F9FD  66 8B 4E 5F               MOV CX,word ptr [ESI + 0x5f]
0045FA01  52                        PUSH EDX
0045FA02  66 8B 56 5D               MOV DX,word ptr [ESI + 0x5d]
0045FA06  56                        PUSH ESI
0045FA07  33 DB                     XOR EBX,EBX
0045FA09  50                        PUSH EAX
0045FA0A  66 8B 46 5B               MOV AX,word ptr [ESI + 0x5b]
0045FA0E  51                        PUSH ECX
0045FA0F  66 89 9E FA 00 00 00      MOV word ptr [ESI + 0xfa],BX
0045FA16  88 9E FC 00 00 00         MOV byte ptr [ESI + 0xfc],BL
0045FA1C  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0045FA22  52                        PUSH EDX
0045FA23  50                        PUSH EAX
0045FA24  E8 98 54 FA FF            CALL 0x00404ec1
0045FA29  85 C0                     TEST EAX,EAX
0045FA2B  0F 85 08 02 00 00         JNZ 0x0045fc39
0045FA31  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0045FA34  8A 96 8E 00 00 00         MOV DL,byte ptr [ESI + 0x8e]
0045FA3A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0045FA3D  51                        PUSH ECX
0045FA3E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0045FA41  56                        PUSH ESI
0045FA42  52                        PUSH EDX
0045FA43  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0045FA46  50                        PUSH EAX
0045FA47  51                        PUSH ECX
0045FA48  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0045FA4E  52                        PUSH EDX
0045FA4F  E8 D1 18 FA FF            CALL 0x00401325
0045FA54  85 C0                     TEST EAX,EAX
0045FA56  0F 85 DD 01 00 00         JNZ 0x0045fc39
0045FA5C  8B 86 0A 07 00 00         MOV EAX,dword ptr [ESI + 0x70a]
0045FA62  8B CE                     MOV ECX,ESI
0045FA64  50                        PUSH EAX
0045FA65  E8 37 29 FA FF            CALL 0x004023a1
0045FA6A  8B CE                     MOV ECX,ESI
0045FA6C  E8 E1 18 FA FF            CALL 0x00401352
0045FA71  5F                        POP EDI
0045FA72  5E                        POP ESI
0045FA73  33 C0                     XOR EAX,EAX
0045FA75  5B                        POP EBX
0045FA76  8B E5                     MOV ESP,EBP
0045FA78  5D                        POP EBP
0045FA79  C3                        RET
LAB_0045fa7a:
0045FA7A  83 BE 8F 00 00 00 FF      CMP dword ptr [ESI + 0x8f],-0x1
0045FA81  75 0A                     JNZ 0x0045fa8d
0045FA83  C7 86 8F 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x8f],0x0
LAB_0045fa8d:
0045FA8D  66 FF 86 FA 00 00 00      INC word ptr [ESI + 0xfa]
0045FA94  66 8B 86 FA 00 00 00      MOV AX,word ptr [ESI + 0xfa]
0045FA9B  66 3B 86 F8 00 00 00      CMP AX,word ptr [ESI + 0xf8]
0045FAA2  0F 8E F6 00 00 00         JLE 0x0045fb9e
0045FAA8  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
0045FAAC  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
0045FAB0  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
0045FAB4  89 8E D7 00 00 00         MOV dword ptr [ESI + 0xd7],ECX
0045FABA  8B CE                     MOV ECX,ESI
0045FABC  89 96 DB 00 00 00         MOV dword ptr [ESI + 0xdb],EDX
0045FAC2  89 86 DF 00 00 00         MOV dword ptr [ESI + 0xdf],EAX
0045FAC8  E8 85 5E FA FF            CALL 0x00405952
0045FACD  8A 86 FC 00 00 00         MOV AL,byte ptr [ESI + 0xfc]
0045FAD3  5F                        POP EDI
0045FAD4  FE C0                     INC AL
0045FAD6  88 86 FC 00 00 00         MOV byte ptr [ESI + 0xfc],AL
0045FADC  5E                        POP ESI
0045FADD  B8 02 00 00 00            MOV EAX,0x2
0045FAE2  5B                        POP EBX
0045FAE3  8B E5                     MOV ESP,EBP
0045FAE5  5D                        POP EBP
0045FAE6  C3                        RET
LAB_0045fae7:
0045FAE7  83 F8 03                  CMP EAX,0x3
0045FAEA  75 55                     JNZ 0x0045fb41
0045FAEC  8B 8E D3 00 00 00         MOV ECX,dword ptr [ESI + 0xd3]
0045FAF2  8B 96 97 00 00 00         MOV EDX,dword ptr [ESI + 0x97]
0045FAF8  66 8B 44 CA 06            MOV AX,word ptr [EDX + ECX*0x8 + 0x6]
0045FAFD  8B C8                     MOV ECX,EAX
0045FAFF  81 E1 FF 0F 00 00         AND ECX,0xfff
0045FB05  66 81 F9 FE 0F            CMP CX,0xffe
0045FB0A  74 12                     JZ 0x0045fb1e
0045FB0C  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
0045FB10  66 3B C1                  CMP AX,CX
0045FB13  74 09                     JZ 0x0045fb1e
0045FB15  50                        PUSH EAX
0045FB16  51                        PUSH ECX
0045FB17  8B CE                     MOV ECX,ESI
0045FB19  E8 CB 26 FA FF            CALL 0x004021e9
LAB_0045fb1e:
0045FB1E  83 BE 8F 00 00 00 FF      CMP dword ptr [ESI + 0x8f],-0x1
0045FB25  75 0A                     JNZ 0x0045fb31
0045FB27  C7 86 8F 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x8f],0x0
LAB_0045fb31:
0045FB31  8B CE                     MOV ECX,ESI
0045FB33  E8 1A 18 FA FF            CALL 0x00401352
0045FB38  5F                        POP EDI
0045FB39  5E                        POP ESI
0045FB3A  33 C0                     XOR EAX,EAX
0045FB3C  5B                        POP EBX
0045FB3D  8B E5                     MOV ESP,EBP
0045FB3F  5D                        POP EBP
0045FB40  C3                        RET
LAB_0045fb41:
0045FB41  33 DB                     XOR EBX,EBX
0045FB43  3B C3                     CMP EAX,EBX
0045FB45  0F 85 EE 00 00 00         JNZ 0x0045fc39
0045FB4B  8B CE                     MOV ECX,ESI
0045FB4D  E8 00 5E FA FF            CALL 0x00405952
0045FB52  66 8B 56 30               MOV DX,word ptr [ESI + 0x30]
0045FB56  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0045FB59  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045FB5F  52                        PUSH EDX
0045FB60  50                        PUSH EAX
0045FB61  E8 93 61 FA FF            CALL 0x00405cf9
0045FB66  8B F8                     MOV EDI,EAX
0045FB68  3B FB                     CMP EDI,EBX
0045FB6A  0F 84 C9 00 00 00         JZ 0x0045fc39
0045FB70  33 C9                     XOR ECX,ECX
0045FB72  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
0045FB76  51                        PUSH ECX
0045FB77  57                        PUSH EDI
0045FB78  E8 8E 27 FA FF            CALL 0x0040230b
0045FB7D  83 C0 06                  ADD EAX,0x6
0045FB80  83 F8 08                  CMP EAX,0x8
0045FB83  0F 87 B0 00 00 00         JA 0x0045fc39
switchD_0045fb89::switchD:
0045FB89  FF 24 85 44 FC 45 00      JMP dword ptr [EAX*0x4 + 0x45fc44]
switchD_0045fb89::caseD_1:
0045FB90  8B CE                     MOV ECX,ESI
0045FB92  66 89 9E FA 00 00 00      MOV word ptr [ESI + 0xfa],BX
0045FB99  E8 89 3D FA FF            CALL 0x00403927
LAB_0045fb9e:
0045FB9E  5F                        POP EDI
0045FB9F  5E                        POP ESI
0045FBA0  33 C0                     XOR EAX,EAX
0045FBA2  5B                        POP EBX
0045FBA3  8B E5                     MOV ESP,EBP
0045FBA5  5D                        POP EBP
0045FBA6  C3                        RET
switchD_0045fb89::caseD_fffffffa:
0045FBA7  83 BE 8F 00 00 00 FF      CMP dword ptr [ESI + 0x8f],-0x1
0045FBAE  75 06                     JNZ 0x0045fbb6
0045FBB0  89 9E 8F 00 00 00         MOV dword ptr [ESI + 0x8f],EBX
LAB_0045fbb6:
0045FBB6  66 FF 86 FA 00 00 00      INC word ptr [ESI + 0xfa]
0045FBBD  66 8B 86 FA 00 00 00      MOV AX,word ptr [ESI + 0xfa]
0045FBC4  66 3B 86 F8 00 00 00      CMP AX,word ptr [ESI + 0xf8]
0045FBCB  7E D1                     JLE 0x0045fb9e
0045FBCD  8A 8E FC 00 00 00         MOV CL,byte ptr [ESI + 0xfc]
0045FBD3  33 D2                     XOR EDX,EDX
0045FBD5  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
0045FBD9  FE C1                     INC CL
0045FBDB  88 8E FC 00 00 00         MOV byte ptr [ESI + 0xfc],CL
0045FBE1  52                        PUSH EDX
0045FBE2  8B CF                     MOV ECX,EDI
0045FBE4  66 89 9E FA 00 00 00      MOV word ptr [ESI + 0xfa],BX
0045FBEB  C7 86 FD 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xfd],0x1
0045FBF5  E8 F8 53 FA FF            CALL 0x00404ff2
0045FBFA  5F                        POP EDI
0045FBFB  5E                        POP ESI
0045FBFC  B8 02 00 00 00            MOV EAX,0x2
0045FC01  5B                        POP EBX
0045FC02  8B E5                     MOV ESP,EBP
0045FC04  5D                        POP EBP
0045FC05  C3                        RET
switchD_0045fb89::caseD_0:
0045FC06  83 BE 8F 00 00 00 FF      CMP dword ptr [ESI + 0x8f],-0x1
0045FC0D  75 06                     JNZ 0x0045fc15
0045FC0F  89 9E 8F 00 00 00         MOV dword ptr [ESI + 0x8f],EBX
LAB_0045fc15:
0045FC15  33 C0                     XOR EAX,EAX
0045FC17  8B CF                     MOV ECX,EDI
0045FC19  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
0045FC1D  C7 86 FD 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xfd],0x1
0045FC27  50                        PUSH EAX
0045FC28  E8 C5 53 FA FF            CALL 0x00404ff2
0045FC2D  5F                        POP EDI
0045FC2E  5E                        POP ESI
0045FC2F  B8 01 00 00 00            MOV EAX,0x1
0045FC34  5B                        POP EBX
0045FC35  8B E5                     MOV ESP,EBP
0045FC37  5D                        POP EBP
0045FC38  C3                        RET
switchD_0045fb89::caseD_fffffffb:
0045FC39  5F                        POP EDI
0045FC3A  5E                        POP ESI
0045FC3B  83 C8 FF                  OR EAX,0xffffffff
0045FC3E  5B                        POP EBX
0045FC3F  8B E5                     MOV ESP,EBP
0045FC41  5D                        POP EBP
0045FC42  C3                        RET
