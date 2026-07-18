FUN_0062fa80:
0062FA80  55                        PUSH EBP
0062FA81  8B EC                     MOV EBP,ESP
0062FA83  83 EC 08                  SUB ESP,0x8
0062FA86  53                        PUSH EBX
0062FA87  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0062FA8A  56                        PUSH ESI
0062FA8B  57                        PUSH EDI
0062FA8C  33 FF                     XOR EDI,EDI
0062FA8E  8B F1                     MOV ESI,ECX
0062FA90  3B DF                     CMP EBX,EDI
0062FA92  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0062FA95  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0062FA98  0F 84 6F 01 00 00         JZ 0x0062fc0d
0062FA9E  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
0062FAA1  89 86 D5 01 00 00         MOV dword ptr [ESI + 0x1d5],EAX
0062FAA7  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0062FAAA  89 8E D9 01 00 00         MOV dword ptr [ESI + 0x1d9],ECX
0062FAB0  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0062FAB3  66 8B C2                  MOV AX,DX
0062FAB6  89 96 DD 01 00 00         MOV dword ptr [ESI + 0x1dd],EDX
0062FABC  66 8B 96 D5 01 00 00      MOV DX,word ptr [ESI + 0x1d5]
0062FAC3  50                        PUSH EAX
0062FAC4  51                        PUSH ECX
0062FAC5  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0062FACB  52                        PUSH EDX
0062FACC  E8 6A 52 DD FF            CALL 0x00404d3b
0062FAD1  85 C0                     TEST EAX,EAX
0062FAD3  0F 84 40 01 00 00         JZ 0x0062fc19
0062FAD9  66 8B 86 D5 01 00 00      MOV AX,word ptr [ESI + 0x1d5]
0062FAE0  66 8B 8E DD 01 00 00      MOV CX,word ptr [ESI + 0x1dd]
0062FAE7  66 8B 96 D9 01 00 00      MOV DX,word ptr [ESI + 0x1d9]
0062FAEE  66 3B C7                  CMP AX,DI
0062FAF1  7C 58                     JL 0x0062fb4b
0062FAF3  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0062FAFA  7D 4F                     JGE 0x0062fb4b
0062FAFC  66 85 D2                  TEST DX,DX
0062FAFF  7C 4A                     JL 0x0062fb4b
0062FB01  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0062FB08  7D 41                     JGE 0x0062fb4b
0062FB0A  66 85 C9                  TEST CX,CX
0062FB0D  7C 3C                     JL 0x0062fb4b
0062FB0F  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0062FB16  7D 33                     JGE 0x0062fb4b
0062FB18  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0062FB1F  0F BF C9                  MOVSX ECX,CX
0062FB22  0F AF F9                  IMUL EDI,ECX
0062FB25  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0062FB2C  0F BF D2                  MOVSX EDX,DX
0062FB2F  0F AF CA                  IMUL ECX,EDX
0062FB32  0F BF C0                  MOVSX EAX,AX
0062FB35  03 F9                     ADD EDI,ECX
0062FB37  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0062FB3D  03 F8                     ADD EDI,EAX
0062FB3F  8B 44 F9 04               MOV EAX,dword ptr [ECX + EDI*0x8 + 0x4]
0062FB43  85 C0                     TEST EAX,EAX
0062FB45  0F 85 CE 00 00 00         JNZ 0x0062fc19
LAB_0062fb4b:
0062FB4B  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
0062FB4E  8B 86 DD 01 00 00         MOV EAX,dword ptr [ESI + 0x1dd]
0062FB54  8B 8E D9 01 00 00         MOV ECX,dword ptr [ESI + 0x1d9]
0062FB5A  8B 96 D5 01 00 00         MOV EDX,dword ptr [ESI + 0x1d5]
0062FB60  57                        PUSH EDI
0062FB61  56                        PUSH ESI
0062FB62  6A 01                     PUSH 0x1
0062FB64  50                        PUSH EAX
0062FB65  51                        PUSH ECX
0062FB66  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0062FB6C  52                        PUSH EDX
0062FB6D  E8 B3 17 DD FF            CALL 0x00401325
0062FB72  85 C0                     TEST EAX,EAX
0062FB74  0F 85 9F 00 00 00         JNZ 0x0062fc19
0062FB7A  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
0062FB7D  8D 7B 24                  LEA EDI,[EBX + 0x24]
0062FB80  89 96 E1 01 00 00         MOV dword ptr [ESI + 0x1e1],EDX
0062FB86  8A 43 38                  MOV AL,byte ptr [EBX + 0x38]
0062FB89  88 86 F9 01 00 00         MOV byte ptr [ESI + 0x1f9],AL
0062FB8F  C7 45 08 05 00 00 00      MOV dword ptr [EBP + 0x8],0x5
LAB_0062fb96:
0062FB96  83 3F 00                  CMP dword ptr [EDI],0x0
0062FB99  74 0E                     JZ 0x0062fba9
0062FB9B  8B CE                     MOV ECX,ESI
0062FB9D  E8 51 1C DD FF            CALL 0x004017f3
0062FBA2  85 C0                     TEST EAX,EAX
0062FBA4  7C 03                     JL 0x0062fba9
0062FBA6  FF 45 F8                  INC dword ptr [EBP + -0x8]
LAB_0062fba9:
0062FBA9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062FBAC  83 C7 04                  ADD EDI,0x4
0062FBAF  48                        DEC EAX
0062FBB0  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0062FBB3  75 E1                     JNZ 0x0062fb96
0062FBB5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062FBB8  8B 4B 39                  MOV ECX,dword ptr [EBX + 0x39]
0062FBBB  85 C0                     TEST EAX,EAX
0062FBBD  89 8E FA 01 00 00         MOV dword ptr [ESI + 0x1fa],ECX
0062FBC3  74 48                     JZ 0x0062fc0d
0062FBC5  C7 45 FC 3D 00 00 00      MOV dword ptr [EBP + -0x4],0x3d
0062FBCC  83 C3 3D                  ADD EBX,0x3d
0062FBCF  8D 86 E5 01 00 00         LEA EAX,[ESI + 0x1e5]
0062FBD5  C7 45 08 05 00 00 00      MOV dword ptr [EBP + 0x8],0x5
LAB_0062fbdc:
0062FBDC  8B 38                     MOV EDI,dword ptr [EAX]
0062FBDE  85 FF                     TEST EDI,EDI
0062FBE0  74 1F                     JZ 0x0062fc01
0062FBE2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0062FBE5  B9 0F 00 00 00            MOV ECX,0xf
0062FBEA  83 C2 3E                  ADD EDX,0x3e
0062FBED  8B F3                     MOV ESI,EBX
0062FBEF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0062FBF2  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
0062FBF5  F3 A5                     MOVSD.REP ES:EDI,ESI
0062FBF7  66 A5                     MOVSW ES:EDI,ESI
0062FBF9  8B 08                     MOV ECX,dword ptr [EAX]
0062FBFB  83 C3 3E                  ADD EBX,0x3e
0062FBFE  89 51 10                  MOV dword ptr [ECX + 0x10],EDX
LAB_0062fc01:
0062FC01  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062FC04  83 C0 04                  ADD EAX,0x4
0062FC07  49                        DEC ECX
0062FC08  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0062FC0B  75 CF                     JNZ 0x0062fbdc
LAB_0062fc0d:
0062FC0D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062FC10  5F                        POP EDI
0062FC11  5E                        POP ESI
0062FC12  5B                        POP EBX
0062FC13  8B E5                     MOV ESP,EBP
0062FC15  5D                        POP EBP
0062FC16  C2 04 00                  RET 0x4
LAB_0062fc19:
0062FC19  8B CE                     MOV ECX,ESI
0062FC1B  E8 65 5C DD FF            CALL 0x00405885
0062FC20  5F                        POP EDI
0062FC21  5E                        POP ESI
0062FC22  33 C0                     XOR EAX,EAX
0062FC24  5B                        POP EBX
0062FC25  8B E5                     MOV ESP,EBP
0062FC27  5D                        POP EBP
0062FC28  C2 04 00                  RET 0x4
