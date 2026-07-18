FUN_0051da70:
0051DA70  55                        PUSH EBP
0051DA71  8B EC                     MOV EBP,ESP
0051DA73  83 EC 1C                  SUB ESP,0x1c
0051DA76  A0 4D 73 80 00            MOV AL,[0x0080734d]
0051DA7B  53                        PUSH EBX
0051DA7C  56                        PUSH ESI
0051DA7D  57                        PUSH EDI
0051DA7E  84 C0                     TEST AL,AL
0051DA80  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0051DA83  0F 84 89 02 00 00         JZ 0x0051dd12
0051DA89  33 C0                     XOR EAX,EAX
0051DA8B  A0 4D 87 80 00            MOV AL,[0x0080874d]
0051DA90  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0051DA93  8A 94 C0 C7 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087c7]
0051DA9A  84 D2                     TEST DL,DL
0051DA9C  0F 85 70 02 00 00         JNZ 0x0051dd12
0051DAA2  A0 4F 87 80 00            MOV AL,[0x0080874f]
0051DAA7  84 C0                     TEST AL,AL
0051DAA9  0F 85 63 02 00 00         JNZ 0x0051dd12
0051DAAF  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
0051DAB6  0F 84 56 02 00 00         JZ 0x0051dd12
0051DABC  8A 81 50 02 00 00         MOV AL,byte ptr [ECX + 0x250]
0051DAC2  32 DB                     XOR BL,BL
0051DAC4  32 D2                     XOR DL,DL
0051DAC6  C6 45 F0 00               MOV byte ptr [EBP + -0x10],0x0
0051DACA  84 C0                     TEST AL,AL
0051DACC  C6 45 EC 00               MOV byte ptr [EBP + -0x14],0x0
0051DAD0  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
0051DAD3  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
0051DAD6  76 2A                     JBE 0x0051db02
0051DAD8  8B 3D 4E 73 80 00         MOV EDI,dword ptr [0x0080734e]
0051DADE  8B F0                     MOV ESI,EAX
0051DAE0  33 C9                     XOR ECX,ECX
0051DAE2  81 E6 FF 00 00 00         AND ESI,0xff
LAB_0051dae8:
0051DAE8  BB 01 00 00 00            MOV EBX,0x1
0051DAED  D3 E3                     SHL EBX,CL
0051DAEF  85 DF                     TEST EDI,EBX
0051DAF1  74 02                     JZ 0x0051daf5
0051DAF3  FE C2                     INC DL
LAB_0051daf5:
0051DAF5  41                        INC ECX
0051DAF6  4E                        DEC ESI
0051DAF7  75 EF                     JNZ 0x0051dae8
0051DAF9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0051DAFC  8A 5D FC                  MOV BL,byte ptr [EBP + -0x4]
0051DAFF  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
LAB_0051db02:
0051DB02  8A 91 51 02 00 00         MOV DL,byte ptr [ECX + 0x251]
0051DB08  84 D2                     TEST DL,DL
0051DB0A  88 55 E4                  MOV byte ptr [EBP + -0x1c],DL
0051DB0D  76 27                     JBE 0x0051db36
0051DB0F  8B 3D 52 73 80 00         MOV EDI,dword ptr [0x00807352]
0051DB15  8B F2                     MOV ESI,EDX
0051DB17  33 C9                     XOR ECX,ECX
0051DB19  81 E6 FF 00 00 00         AND ESI,0xff
LAB_0051db1f:
0051DB1F  BA 01 00 00 00            MOV EDX,0x1
0051DB24  D3 E2                     SHL EDX,CL
0051DB26  85 D7                     TEST EDI,EDX
0051DB28  74 02                     JZ 0x0051db2c
0051DB2A  FE C3                     INC BL
LAB_0051db2c:
0051DB2C  41                        INC ECX
0051DB2D  4E                        DEC ESI
0051DB2E  75 EF                     JNZ 0x0051db1f
0051DB30  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0051DB33  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
LAB_0051db36:
0051DB36  8A 99 52 02 00 00         MOV BL,byte ptr [ECX + 0x252]
0051DB3C  84 DB                     TEST BL,BL
0051DB3E  76 24                     JBE 0x0051db64
0051DB40  8B F3                     MOV ESI,EBX
0051DB42  33 FF                     XOR EDI,EDI
0051DB44  81 E6 FF 00 00 00         AND ESI,0xff
LAB_0051db4a:
0051DB4A  BA 01 00 00 00            MOV EDX,0x1
0051DB4F  8B CF                     MOV ECX,EDI
0051DB51  D3 E2                     SHL EDX,CL
0051DB53  8B 0D 56 73 80 00         MOV ECX,dword ptr [0x00807356]
0051DB59  85 D1                     TEST ECX,EDX
0051DB5B  74 03                     JZ 0x0051db60
0051DB5D  FE 45 EC                  INC byte ptr [EBP + -0x14]
LAB_0051db60:
0051DB60  47                        INC EDI
0051DB61  4E                        DEC ESI
0051DB62  75 E6                     JNZ 0x0051db4a
LAB_0051db64:
0051DB64  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0051DB67  8A 92 53 02 00 00         MOV DL,byte ptr [EDX + 0x253]
0051DB6D  84 D2                     TEST DL,DL
0051DB6F  76 2B                     JBE 0x0051db9c
0051DB71  33 C9                     XOR ECX,ECX
0051DB73  8B F2                     MOV ESI,EDX
0051DB75  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0051DB78  81 E6 FF 00 00 00         AND ESI,0xff
LAB_0051db7e:
0051DB7E  BF 01 00 00 00            MOV EDI,0x1
0051DB83  D3 E7                     SHL EDI,CL
0051DB85  8B 0D 5A 73 80 00         MOV ECX,dword ptr [0x0080735a]
0051DB8B  85 F9                     TEST ECX,EDI
0051DB8D  74 03                     JZ 0x0051db92
0051DB8F  FE 45 F0                  INC byte ptr [EBP + -0x10]
LAB_0051db92:
0051DB92  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0051DB95  41                        INC ECX
0051DB96  4E                        DEC ESI
0051DB97  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0051DB9A  75 E2                     JNZ 0x0051db7e
LAB_0051db9c:
0051DB9C  33 C9                     XOR ECX,ECX
0051DB9E  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051DBA4  83 E9 02                  SUB ECX,0x2
0051DBA7  74 51                     JZ 0x0051dbfa
0051DBA9  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0051DBAC  49                        DEC ECX
0051DBAD  74 27                     JZ 0x0051dbd6
0051DBAF  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0051DBB2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051DBB5  81 E7 FF 00 00 00         AND EDI,0xff
0051DBBB  81 E2 FF 00 00 00         AND EDX,0xff
0051DBC1  81 E6 FF 00 00 00         AND ESI,0xff
0051DBC7  2B FA                     SUB EDI,EDX
0051DBC9  2B FE                     SUB EDI,ESI
0051DBCB  25 FF 00 00 00            AND EAX,0xff
0051DBD0  8D 7C 07 FF               LEA EDI,[EDI + EAX*0x1 + -0x1]
0051DBD4  EB 49                     JMP 0x0051dc1f
LAB_0051dbd6:
0051DBD6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0051DBD9  81 E2 FF 00 00 00         AND EDX,0xff
0051DBDF  81 E1 FF 00 00 00         AND ECX,0xff
0051DBE5  81 E6 FF 00 00 00         AND ESI,0xff
0051DBEB  2B D1                     SUB EDX,ECX
0051DBED  2B D6                     SUB EDX,ESI
0051DBEF  25 FF 00 00 00            AND EAX,0xff
0051DBF4  8D 7C 02 FF               LEA EDI,[EDX + EAX*0x1 + -0x1]
0051DBF8  EB 25                     JMP 0x0051dc1f
LAB_0051dbfa:
0051DBFA  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0051DBFD  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0051DC00  81 E3 FF 00 00 00         AND EBX,0xff
0051DC06  81 E2 FF 00 00 00         AND EDX,0xff
0051DC0C  81 E6 FF 00 00 00         AND ESI,0xff
0051DC12  2B DA                     SUB EBX,EDX
0051DC14  2B DE                     SUB EBX,ESI
0051DC16  25 FF 00 00 00            AND EAX,0xff
0051DC1B  8D 7C 03 FF               LEA EDI,[EBX + EAX*0x1 + -0x1]
LAB_0051dc1f:
0051DC1F  85 FF                     TEST EDI,EDI
0051DC21  0F 8C EB 00 00 00         JL 0x0051dd12
0051DC27  E8 94 0A 21 00            CALL 0x0072e6c0
0051DC2C  47                        INC EDI
0051DC2D  33 D2                     XOR EDX,EDX
0051DC2F  F7 F7                     DIV EDI
0051DC31  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0051DC34  8A 8F 50 02 00 00         MOV CL,byte ptr [EDI + 0x250]
0051DC3A  8B C1                     MOV EAX,ECX
0051DC3C  25 FF 00 00 00            AND EAX,0xff
0051DC41  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
0051DC44  8B D0                     MOV EDX,EAX
0051DC46  2B D6                     SUB EDX,ESI
0051DC48  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0051DC4B  81 E6 FF 00 00 00         AND ESI,0xff
0051DC51  3B F2                     CMP ESI,EDX
0051DC53  7D 0B                     JGE 0x0051dc60
0051DC55  BE 4E 73 80 00            MOV ESI,0x80734e
0051DC5A  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
0051DC5E  EB 51                     JMP 0x0051dcb1
LAB_0051dc60:
0051DC60  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
0051DC63  8A 55 FC                  MOV DL,byte ptr [EBP + -0x4]
0051DC66  2A C1                     SUB AL,CL
0051DC68  02 D0                     ADD DL,AL
0051DC6A  33 C0                     XOR EAX,EAX
0051DC6C  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051DC71  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
0051DC74  48                        DEC EAX
0051DC75  74 29                     JZ 0x0051dca0
0051DC77  48                        DEC EAX
0051DC78  74 13                     JZ 0x0051dc8d
0051DC7A  33 C0                     XOR EAX,EAX
0051DC7C  BE 5A 73 80 00            MOV ESI,0x80735a
0051DC81  8A 87 53 02 00 00         MOV AL,byte ptr [EDI + 0x253]
0051DC87  C6 45 F8 03               MOV byte ptr [EBP + -0x8],0x3
0051DC8B  EB 24                     JMP 0x0051dcb1
LAB_0051dc8d:
0051DC8D  33 C0                     XOR EAX,EAX
0051DC8F  BE 56 73 80 00            MOV ESI,0x807356
0051DC94  8A 87 52 02 00 00         MOV AL,byte ptr [EDI + 0x252]
0051DC9A  C6 45 F8 02               MOV byte ptr [EBP + -0x8],0x2
0051DC9E  EB 11                     JMP 0x0051dcb1
LAB_0051dca0:
0051DCA0  33 C0                     XOR EAX,EAX
0051DCA2  BE 52 73 80 00            MOV ESI,0x807352
0051DCA7  8A 87 51 02 00 00         MOV AL,byte ptr [EDI + 0x251]
0051DCAD  C6 45 F8 01               MOV byte ptr [EBP + -0x8],0x1
LAB_0051dcb1:
0051DCB1  85 C0                     TEST EAX,EAX
0051DCB3  C6 45 F4 00               MOV byte ptr [EBP + -0xc],0x0
0051DCB7  76 59                     JBE 0x0051dd12
0051DCB9  8B 1E                     MOV EBX,dword ptr [ESI]
0051DCBB  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0051DCBE  33 C9                     XOR ECX,ECX
LAB_0051dcc0:
0051DCC0  BA 01 00 00 00            MOV EDX,0x1
0051DCC5  D3 E2                     SHL EDX,CL
0051DCC7  85 D3                     TEST EBX,EDX
0051DCC9  75 0C                     JNZ 0x0051dcd7
0051DCCB  8A 4D FC                  MOV CL,byte ptr [EBP + -0x4]
0051DCCE  84 C9                     TEST CL,CL
0051DCD0  74 1E                     JZ 0x0051dcf0
0051DCD2  FE C9                     DEC CL
0051DCD4  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
LAB_0051dcd7:
0051DCD7  FE 45 F4                  INC byte ptr [EBP + -0xc]
0051DCDA  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0051DCDD  8B CE                     MOV ECX,ESI
0051DCDF  81 E1 FF 00 00 00         AND ECX,0xff
0051DCE5  3B C8                     CMP ECX,EAX
0051DCE7  72 D7                     JC 0x0051dcc0
0051DCE9  5F                        POP EDI
0051DCEA  5E                        POP ESI
0051DCEB  5B                        POP EBX
0051DCEC  8B E5                     MOV ESP,EBP
0051DCEE  5D                        POP EBP
0051DCEF  C3                        RET
LAB_0051dcf0:
0051DCF0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0051DCF3  6A 00                     PUSH 0x0
0051DCF5  25 FF 00 00 00            AND EAX,0xff
0051DCFA  81 E6 FF 00 00 00         AND ESI,0xff
0051DD00  50                        PUSH EAX
0051DD01  56                        PUSH ESI
0051DD02  8B CF                     MOV ECX,EDI
0051DD04  E8 AF 43 EE FF            CALL 0x004020b8
0051DD09  8B 17                     MOV EDX,dword ptr [EDI]
0051DD0B  6A 01                     PUSH 0x1
0051DD0D  8B CF                     MOV ECX,EDI
0051DD0F  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_0051dd12:
0051DD12  5F                        POP EDI
0051DD13  5E                        POP ESI
0051DD14  5B                        POP EBX
0051DD15  8B E5                     MOV ESP,EBP
0051DD17  5D                        POP EBP
0051DD18  C3                        RET
