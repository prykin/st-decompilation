FUN_0060cef0:
0060CEF0  55                        PUSH EBP
0060CEF1  8B EC                     MOV EBP,ESP
0060CEF3  83 EC 18                  SUB ESP,0x18
0060CEF6  53                        PUSH EBX
0060CEF7  56                        PUSH ESI
0060CEF8  8B F1                     MOV ESI,ECX
0060CEFA  B8 68 01 00 00            MOV EAX,0x168
0060CEFF  99                        CDQ
0060CF00  8B 8E 3C 02 00 00         MOV ECX,dword ptr [ESI + 0x23c]
0060CF06  33 DB                     XOR EBX,EBX
0060CF08  F7 F9                     IDIV ECX
0060CF0A  3B CB                     CMP ECX,EBX
0060CF0C  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0060CF0F  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0060CF12  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0060CF15  0F 8E DE 00 00 00         JLE 0x0060cff9
0060CF1B  57                        PUSH EDI
0060CF1C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0060CF1F  EB 03                     JMP 0x0060cf24
LAB_0060cf21:
0060CF21  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0060cf24:
0060CF24  53                        PUSH EBX
0060CF25  E8 26 30 0A 00            CALL 0x006aff50
0060CF2A  53                        PUSH EBX
0060CF2B  8B F8                     MOV EDI,EAX
0060CF2D  E8 29 30 0A 00            CALL 0x006aff5b
0060CF32  8B 8E FD 01 00 00         MOV ECX,dword ptr [ESI + 0x1fd]
0060CF38  8B D8                     MOV EBX,EAX
0060CF3A  8B D1                     MOV EDX,ECX
0060CF3C  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0060CF41  0F AF D7                  IMUL EDX,EDI
0060CF44  0F AF CB                  IMUL ECX,EBX
0060CF47  F7 EA                     IMUL EDX
0060CF49  C1 FA 0C                  SAR EDX,0xc
0060CF4C  8B C2                     MOV EAX,EDX
0060CF4E  83 C4 08                  ADD ESP,0x8
0060CF51  C1 E8 1F                  SHR EAX,0x1f
0060CF54  03 D0                     ADD EDX,EAX
0060CF56  8B 86 E9 01 00 00         MOV EAX,dword ptr [ESI + 0x1e9]
0060CF5C  03 D0                     ADD EDX,EAX
0060CF5E  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0060CF63  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0060CF66  F7 E9                     IMUL ECX
0060CF68  C1 FA 0C                  SAR EDX,0xc
0060CF6B  8B CA                     MOV ECX,EDX
0060CF6D  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0060CF72  C1 E9 1F                  SHR ECX,0x1f
0060CF75  03 D1                     ADD EDX,ECX
0060CF77  8B 8E ED 01 00 00         MOV ECX,dword ptr [ESI + 0x1ed]
0060CF7D  03 D1                     ADD EDX,ECX
0060CF7F  8B 8E F9 01 00 00         MOV ECX,dword ptr [ESI + 0x1f9]
0060CF85  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0060CF88  8B D1                     MOV EDX,ECX
0060CF8A  0F AF D7                  IMUL EDX,EDI
0060CF8D  0F AF CB                  IMUL ECX,EBX
0060CF90  F7 EA                     IMUL EDX
0060CF92  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0060CF95  C1 FA 0C                  SAR EDX,0xc
0060CF98  8B C2                     MOV EAX,EDX
0060CF9A  C1 E8 1F                  SHR EAX,0x1f
0060CF9D  03 D0                     ADD EDX,EAX
0060CF9F  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0060CFA4  03 D7                     ADD EDX,EDI
0060CFA6  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0060CFA9  F7 E9                     IMUL ECX
0060CFAB  C1 FA 0C                  SAR EDX,0xc
0060CFAE  8B 86 F1 01 00 00         MOV EAX,dword ptr [ESI + 0x1f1]
0060CFB4  8B CA                     MOV ECX,EDX
0060CFB6  C1 E9 1F                  SHR ECX,0x1f
0060CFB9  03 D1                     ADD EDX,ECX
0060CFBB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0060CFBE  03 D1                     ADD EDX,ECX
0060CFC0  50                        PUSH EAX
0060CFC1  52                        PUSH EDX
0060CFC2  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0060CFC5  52                        PUSH EDX
0060CFC6  50                        PUSH EAX
0060CFC7  51                        PUSH ECX
0060CFC8  57                        PUSH EDI
0060CFC9  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0060CFCC  8B CE                     MOV ECX,ESI
0060CFCE  57                        PUSH EDI
0060CFCF  E8 FB 70 DF FF            CALL 0x004040cf
0060CFD4  85 C0                     TEST EAX,EAX
0060CFD6  74 03                     JZ 0x0060cfdb
0060CFD8  FF 45 F8                  INC dword ptr [EBP + -0x8]
LAB_0060cfdb:
0060CFDB  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0060CFDE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0060CFE1  03 C8                     ADD ECX,EAX
0060CFE3  8B 86 3C 02 00 00         MOV EAX,dword ptr [ESI + 0x23c]
0060CFE9  47                        INC EDI
0060CFEA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0060CFED  3B F8                     CMP EDI,EAX
0060CFEF  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0060CFF2  0F 8C 29 FF FF FF         JL 0x0060cf21
0060CFF8  5F                        POP EDI
LAB_0060cff9:
0060CFF9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0060CFFC  8B 86 3C 02 00 00         MOV EAX,dword ptr [ESI + 0x23c]
0060D002  5E                        POP ESI
0060D003  3B C8                     CMP ECX,EAX
0060D005  5B                        POP EBX
0060D006  75 09                     JNZ 0x0060d011
0060D008  B8 01 00 00 00            MOV EAX,0x1
0060D00D  8B E5                     MOV ESP,EBP
0060D00F  5D                        POP EBP
0060D010  C3                        RET
LAB_0060d011:
0060D011  33 C0                     XOR EAX,EAX
0060D013  8B E5                     MOV ESP,EBP
0060D015  5D                        POP EBP
0060D016  C3                        RET
