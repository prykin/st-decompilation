FUN_00758100:
00758100  55                        PUSH EBP
00758101  8B EC                     MOV EBP,ESP
00758103  53                        PUSH EBX
00758104  56                        PUSH ESI
00758105  57                        PUSH EDI
00758106  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00758109  8B 77 10                  MOV ESI,dword ptr [EDI + 0x10]
0075810C  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0075810F  8B 0E                     MOV ECX,dword ptr [ESI]
00758111  85 C0                     TEST EAX,EAX
00758113  75 0D                     JNZ 0x00758122
00758115  57                        PUSH EDI
00758116  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00758119  85 C0                     TEST EAX,EAX
0075811B  74 40                     JZ 0x0075815d
0075811D  8B 0E                     MOV ECX,dword ptr [ESI]
0075811F  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
LAB_00758122:
00758122  33 DB                     XOR EBX,EBX
00758124  48                        DEC EAX
00758125  8A 39                     MOV BH,byte ptr [ECX]
00758127  41                        INC ECX
00758128  85 C0                     TEST EAX,EAX
0075812A  75 0D                     JNZ 0x00758139
0075812C  57                        PUSH EDI
0075812D  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00758130  85 C0                     TEST EAX,EAX
00758132  74 29                     JZ 0x0075815d
00758134  8B 0E                     MOV ECX,dword ptr [ESI]
00758136  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
LAB_00758139:
00758139  33 D2                     XOR EDX,EDX
0075813B  8A 11                     MOV DL,byte ptr [ECX]
0075813D  03 DA                     ADD EBX,EDX
0075813F  41                        INC ECX
00758140  48                        DEC EAX
00758141  83 C3 FE                  ADD EBX,-0x2
00758144  89 0E                     MOV dword ptr [ESI],ECX
00758146  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
00758149  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0075814C  53                        PUSH EBX
0075814D  57                        PUSH EDI
0075814E  FF 50 10                  CALL dword ptr [EAX + 0x10]
00758151  5F                        POP EDI
00758152  5E                        POP ESI
00758153  B8 01 00 00 00            MOV EAX,0x1
00758158  5B                        POP EBX
00758159  5D                        POP EBP
0075815A  C2 04 00                  RET 0x4
LAB_0075815d:
0075815D  5F                        POP EDI
0075815E  5E                        POP ESI
0075815F  33 C0                     XOR EAX,EAX
00758161  5B                        POP EBX
00758162  5D                        POP EBP
00758163  C2 04 00                  RET 0x4
