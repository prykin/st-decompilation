FUN_0074cce2:
0074CCE2  55                        PUSH EBP
0074CCE3  8B EC                     MOV EBP,ESP
0074CCE5  53                        PUSH EBX
0074CCE6  56                        PUSH ESI
0074CCE7  8B F1                     MOV ESI,ECX
0074CCE9  57                        PUSH EDI
0074CCEA  8B 86 8C 00 00 00         MOV EAX,dword ptr [ESI + 0x8c]
0074CCF0  8B 8E 90 00 00 00         MOV ECX,dword ptr [ESI + 0x90]
0074CCF6  83 B8 C8 00 00 00 00      CMP dword ptr [EAX + 0xc8],0x0
0074CCFD  74 0D                     JZ 0x0074cd0c
0074CCFF  8B 01                     MOV EAX,dword ptr [ECX]
0074CD01  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074CD04  FF 50 44                  CALL dword ptr [EAX + 0x44]
0074CD07  E9 B2 00 00 00            JMP 0x0074cdbe
LAB_0074cd0c:
0074CD0C  8B 80 9C 00 00 00         MOV EAX,dword ptr [EAX + 0x9c]
0074CD12  3B 81 98 00 00 00         CMP EAX,dword ptr [ECX + 0x98]
0074CD18  74 1B                     JZ 0x0074cd35
0074CD1A  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074CD1D  8B CE                     MOV ECX,ESI
0074CD1F  E8 10 FE FF FF            CALL 0x0074cb34
0074CD24  85 C0                     TEST EAX,EAX
0074CD26  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0074CD29  75 0A                     JNZ 0x0074cd35
0074CD2B  B8 FF FF 00 80            MOV EAX,0x8000ffff
0074CD30  E9 89 00 00 00            JMP 0x0074cdbe
LAB_0074cd35:
0074CD35  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0074CD38  8B 06                     MOV EAX,dword ptr [ESI]
0074CD3A  57                        PUSH EDI
0074CD3B  8B CE                     MOV ECX,ESI
0074CD3D  FF 50 68                  CALL dword ptr [EAX + 0x68]
0074CD40  8B D8                     MOV EBX,EAX
0074CD42  85 DB                     TEST EBX,EBX
0074CD44  7D 22                     JGE 0x0074cd68
0074CD46  8B 86 8C 00 00 00         MOV EAX,dword ptr [ESI + 0x8c]
0074CD4C  8B 8E 90 00 00 00         MOV ECX,dword ptr [ESI + 0x90]
0074CD52  8B 80 9C 00 00 00         MOV EAX,dword ptr [EAX + 0x9c]
0074CD58  3B 81 98 00 00 00         CMP EAX,dword ptr [ECX + 0x98]
0074CD5E  74 5C                     JZ 0x0074cdbc
0074CD60  8B 07                     MOV EAX,dword ptr [EDI]
0074CD62  57                        PUSH EDI
0074CD63  FF 50 08                  CALL dword ptr [EAX + 0x8]
0074CD66  EB 54                     JMP 0x0074cdbc
LAB_0074cd68:
0074CD68  75 10                     JNZ 0x0074cd7a
0074CD6A  8B 8E 90 00 00 00         MOV ECX,dword ptr [ESI + 0x90]
0074CD70  57                        PUSH EDI
0074CD71  8B 01                     MOV EAX,dword ptr [ECX]
0074CD73  FF 50 44                  CALL dword ptr [EAX + 0x44]
0074CD76  8B D8                     MOV EBX,EAX
0074CD78  EB 1F                     JMP 0x0074cd99
LAB_0074cd7a:
0074CD7A  6A 01                     PUSH 0x1
0074CD7C  5F                        POP EDI
0074CD7D  3B DF                     CMP EBX,EDI
0074CD7F  75 18                     JNZ 0x0074cd99
0074CD81  33 DB                     XOR EBX,EBX
0074CD83  89 7E 54                  MOV dword ptr [ESI + 0x54],EDI
0074CD86  39 5E 58                  CMP dword ptr [ESI + 0x58],EBX
0074CD89  75 0E                     JNZ 0x0074cd99
0074CD8B  53                        PUSH EBX
0074CD8C  53                        PUSH EBX
0074CD8D  6A 0B                     PUSH 0xb
0074CD8F  8B CE                     MOV ECX,ESI
0074CD91  E8 70 A6 FF FF            CALL 0x00747406
0074CD96  89 7E 58                  MOV dword ptr [ESI + 0x58],EDI
LAB_0074cd99:
0074CD99  8B 86 8C 00 00 00         MOV EAX,dword ptr [ESI + 0x8c]
0074CD9F  8B 8E 90 00 00 00         MOV ECX,dword ptr [ESI + 0x90]
0074CDA5  8B 80 9C 00 00 00         MOV EAX,dword ptr [EAX + 0x9c]
0074CDAB  3B 81 98 00 00 00         CMP EAX,dword ptr [ECX + 0x98]
0074CDB1  74 09                     JZ 0x0074cdbc
0074CDB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074CDB6  50                        PUSH EAX
0074CDB7  8B 08                     MOV ECX,dword ptr [EAX]
0074CDB9  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_0074cdbc:
0074CDBC  8B C3                     MOV EAX,EBX
LAB_0074cdbe:
0074CDBE  5F                        POP EDI
0074CDBF  5E                        POP ESI
0074CDC0  5B                        POP EBX
0074CDC1  5D                        POP EBP
0074CDC2  C2 04 00                  RET 0x4
