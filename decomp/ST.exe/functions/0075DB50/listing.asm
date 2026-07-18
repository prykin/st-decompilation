FUN_0075db50:
0075DB50  55                        PUSH EBP
0075DB51  8B EC                     MOV EBP,ESP
0075DB53  83 EC 24                  SUB ESP,0x24
0075DB56  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075DB59  8B 51 68                  MOV EDX,dword ptr [ECX + 0x68]
0075DB5C  8B 81 B6 01 00 00         MOV EAX,dword ptr [ECX + 0x1b6]
0075DB62  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0075DB65  8B 91 32 01 00 00         MOV EDX,dword ptr [ECX + 0x132]
0075DB6B  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0075DB6E  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0075DB71  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0075DB74  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0075DB77  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0075DB7A  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0075DB7D  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
0075DB80  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075DB83  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0075DB86  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0075DB89  49                        DEC ECX
0075DB8A  0F 88 D8 00 00 00         JS 0x0075dc68
0075DB90  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075DB93  53                        PUSH EBX
0075DB94  C1 E0 02                  SHL EAX,0x2
0075DB97  41                        INC ECX
0075DB98  56                        PUSH ESI
0075DB99  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0075DB9C  57                        PUSH EDI
0075DB9D  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_0075dba0:
0075DBA0  8B 0E                     MOV ECX,dword ptr [ESI]
0075DBA2  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0075DBA5  83 C3 04                  ADD EBX,0x4
0075DBA8  8B 0C 01                  MOV ECX,dword ptr [ECX + EAX*0x1]
0075DBAB  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
0075DBAE  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0075DBB1  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0075DBB4  8B 3C 08                  MOV EDI,dword ptr [EAX + ECX*0x1]
0075DBB7  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0075DBBA  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0075DBBD  8B 0C 01                  MOV ECX,dword ptr [ECX + EAX*0x1]
0075DBC0  83 C0 04                  ADD EAX,0x4
0075DBC3  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
0075DBC6  8B 4B FC                  MOV ECX,dword ptr [EBX + -0x4]
0075DBC9  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0075DBCC  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0075DBCF  85 DB                     TEST EBX,EBX
0075DBD1  0F 86 81 00 00 00         JBE 0x0075dc58
0075DBD7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075DBDA  8B C7                     MOV EAX,EDI
0075DBDC  2B F7                     SUB ESI,EDI
0075DBDE  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0075DBE1  2B F8                     SUB EDI,EAX
0075DBE3  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0075DBE6  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0075DBE9  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
0075DBEC  EB 06                     JMP 0x0075dbf4
LAB_0075dbee:
0075DBEE  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0075DBF1  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0075dbf4:
0075DBF4  33 DB                     XOR EBX,EBX
0075DBF6  83 C1 03                  ADD ECX,0x3
0075DBF9  8A 1C 06                  MOV BL,byte ptr [ESI + EAX*0x1]
0075DBFC  8B F3                     MOV ESI,EBX
0075DBFE  33 DB                     XOR EBX,EBX
0075DC00  8A 18                     MOV BL,byte ptr [EAX]
0075DC02  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0075DC05  33 DB                     XOR EBX,EBX
0075DC07  8A 1C 07                  MOV BL,byte ptr [EDI + EAX*0x1]
0075DC0A  8B FB                     MOV EDI,EBX
0075DC0C  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0075DC0F  8B 1C BB                  MOV EBX,dword ptr [EBX + EDI*0x4]
0075DC12  03 DE                     ADD EBX,ESI
0075DC14  8A 14 13                  MOV DL,byte ptr [EBX + EDX*0x1]
0075DC17  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075DC1A  88 51 FF                  MOV byte ptr [ECX + -0x1],DL
0075DC1D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0075DC20  8B 1C 9A                  MOV EBX,dword ptr [EDX + EBX*0x4]
0075DC23  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0075DC26  03 1C BA                  ADD EBX,dword ptr [EDX + EDI*0x4]
0075DC29  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0075DC2C  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0075DC2F  C1 FB 10                  SAR EBX,0x10
0075DC32  03 DE                     ADD EBX,ESI
0075DC34  8A 1C 13                  MOV BL,byte ptr [EBX + EDX*0x1]
0075DC37  88 59 FE                  MOV byte ptr [ECX + -0x2],BL
0075DC3A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075DC3D  8B 3C 9F                  MOV EDI,dword ptr [EDI + EBX*0x4]
0075DC40  03 FE                     ADD EDI,ESI
0075DC42  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0075DC45  40                        INC EAX
0075DC46  4E                        DEC ESI
0075DC47  8A 1C 17                  MOV BL,byte ptr [EDI + EDX*0x1]
0075DC4A  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
0075DC4D  88 59 FD                  MOV byte ptr [ECX + -0x3],BL
0075DC50  75 9C                     JNZ 0x0075dbee
0075DC52  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0075DC55  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_0075dc58:
0075DC58  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075DC5B  49                        DEC ECX
0075DC5C  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0075DC5F  0F 85 3B FF FF FF         JNZ 0x0075dba0
0075DC65  5F                        POP EDI
0075DC66  5E                        POP ESI
0075DC67  5B                        POP EBX
LAB_0075dc68:
0075DC68  8B E5                     MOV ESP,EBP
0075DC6A  5D                        POP EBP
0075DC6B  C2 14 00                  RET 0x14
