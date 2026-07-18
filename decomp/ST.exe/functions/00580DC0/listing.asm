FUN_00580dc0:
00580DC0  56                        PUSH ESI
00580DC1  8B F1                     MOV ESI,ECX
00580DC3  57                        PUSH EDI
00580DC4  33 FF                     XOR EDI,EDI
00580DC6  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
00580DCC  8B 8E 4D 02 00 00         MOV ECX,dword ptr [ESI + 0x24d]
00580DD2  8B 96 49 02 00 00         MOV EDX,dword ptr [ESI + 0x249]
00580DD8  50                        PUSH EAX
00580DD9  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
00580DDF  51                        PUSH ECX
00580DE0  52                        PUSH EDX
00580DE1  50                        PUSH EAX
00580DE2  E8 59 12 E8 FF            CALL 0x00402040
00580DE7  83 C4 10                  ADD ESP,0x10
00580DEA  85 C0                     TEST EAX,EAX
00580DEC  0F 84 D5 00 00 00         JZ 0x00580ec7
00580DF2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00580DF8  56                        PUSH ESI
00580DF9  68 FF FF 00 00            PUSH 0xffff
00580DFE  E8 D5 2E E8 FF            CALL 0x00403cd8
00580E03  85 C0                     TEST EAX,EAX
00580E05  74 0C                     JZ 0x00580e13
00580E07  8B CE                     MOV ECX,ESI
00580E09  E8 3B 36 E8 FF            CALL 0x00404449
00580E0E  8B C7                     MOV EAX,EDI
00580E10  5F                        POP EDI
00580E11  5E                        POP ESI
00580E12  C3                        RET
LAB_00580e13:
00580E13  C7 86 5D 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x25d],0x0
00580E1D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00580E23  56                        PUSH ESI
00580E24  E8 24 1E E8 FF            CALL 0x00402c4d
00580E29  66 8B 86 4D 02 00 00      MOV AX,word ptr [ESI + 0x24d]
00580E30  66 8B 8E 49 02 00 00      MOV CX,word ptr [ESI + 0x249]
00580E37  66 8B B6 45 02 00 00      MOV SI,word ptr [ESI + 0x245]
00580E3E  BF 01 00 00 00            MOV EDI,0x1
00580E43  66 85 F6                  TEST SI,SI
00580E46  7C 7F                     JL 0x00580ec7
00580E48  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
00580E4F  66 3B F2                  CMP SI,DX
00580E52  7D 73                     JGE 0x00580ec7
00580E54  66 85 C9                  TEST CX,CX
00580E57  7C 6E                     JL 0x00580ec7
00580E59  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00580E60  7D 65                     JGE 0x00580ec7
00580E62  66 85 C0                  TEST AX,AX
00580E65  7C 60                     JL 0x00580ec7
00580E67  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
00580E6E  7D 57                     JGE 0x00580ec7
00580E70  53                        PUSH EBX
00580E71  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00580E78  0F BF C0                  MOVSX EAX,AX
00580E7B  0F AF D8                  IMUL EBX,EAX
00580E7E  0F BF D2                  MOVSX EDX,DX
00580E81  0F BF C1                  MOVSX EAX,CX
00580E84  0F AF D0                  IMUL EDX,EAX
00580E87  0F BF CE                  MOVSX ECX,SI
00580E8A  03 DA                     ADD EBX,EDX
00580E8C  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00580E92  03 D9                     ADD EBX,ECX
00580E94  8B 34 DA                  MOV ESI,dword ptr [EDX + EBX*0x8]
00580E97  5B                        POP EBX
00580E98  85 F6                     TEST ESI,ESI
00580E9A  74 2B                     JZ 0x00580ec7
00580E9C  8B 06                     MOV EAX,dword ptr [ESI]
00580E9E  8B CE                     MOV ECX,ESI
00580EA0  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00580EA3  83 F8 39                  CMP EAX,0x39
00580EA6  74 18                     JZ 0x00580ec0
00580EA8  8B 16                     MOV EDX,dword ptr [ESI]
00580EAA  8B CE                     MOV ECX,ESI
00580EAC  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00580EAF  83 F8 4F                  CMP EAX,0x4f
00580EB2  74 0C                     JZ 0x00580ec0
00580EB4  8B 06                     MOV EAX,dword ptr [ESI]
00580EB6  8B CE                     MOV ECX,ESI
00580EB8  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00580EBB  83 F8 5E                  CMP EAX,0x5e
00580EBE  75 07                     JNZ 0x00580ec7
LAB_00580ec0:
00580EC0  8B CE                     MOV ECX,ESI
00580EC2  E8 21 50 E8 FF            CALL 0x00405ee8
LAB_00580ec7:
00580EC7  8B C7                     MOV EAX,EDI
00580EC9  5F                        POP EDI
00580ECA  5E                        POP ESI
00580ECB  C3                        RET
