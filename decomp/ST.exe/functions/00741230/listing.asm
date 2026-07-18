FUN_00741230:
00741230  55                        PUSH EBP
00741231  8B EC                     MOV EBP,ESP
00741233  51                        PUSH ECX
00741234  53                        PUSH EBX
00741235  56                        PUSH ESI
00741236  57                        PUSH EDI
LAB_00741237:
00741237  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0074123B  75 1E                     JNZ 0x0074125b
0074123D  68 50 FE 79 00            PUSH 0x79fe50
00741242  6A 00                     PUSH 0x0
00741244  6A 60                     PUSH 0x60
00741246  68 4C 0E 7A 00            PUSH 0x7a0e4c
0074124B  6A 02                     PUSH 0x2
0074124D  E8 4E FD FE FF            CALL 0x00730fa0
00741252  83 C4 14                  ADD ESP,0x14
00741255  83 F8 01                  CMP EAX,0x1
00741258  75 01                     JNZ 0x0074125b
0074125A  CC                        INT3
LAB_0074125b:
0074125B  33 C0                     XOR EAX,EAX
0074125D  85 C0                     TEST EAX,EAX
0074125F  75 D6                     JNZ 0x00741237
00741261  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00741264  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00741267  83 7D 08 FF               CMP dword ptr [EBP + 0x8],-0x1
0074126B  74 2A                     JZ 0x00741297
0074126D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00741270  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00741273  83 E0 01                  AND EAX,0x1
00741276  85 C0                     TEST EAX,EAX
00741278  75 25                     JNZ 0x0074129f
0074127A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074127D  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00741280  81 E2 80 00 00 00         AND EDX,0x80
00741286  85 D2                     TEST EDX,EDX
00741288  74 0D                     JZ 0x00741297
0074128A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074128D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00741290  83 E1 02                  AND ECX,0x2
00741293  85 C9                     TEST ECX,ECX
00741295  74 08                     JZ 0x0074129f
LAB_00741297:
00741297  83 C8 FF                  OR EAX,0xffffffff
0074129A  E9 C8 00 00 00            JMP 0x00741367
LAB_0074129f:
0074129F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007412A2  83 7A 08 00               CMP dword ptr [EDX + 0x8],0x0
007412A6  75 0C                     JNZ 0x007412b4
007412A8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007412AB  50                        PUSH EAX
007412AC  E8 8F 1B 00 00            CALL 0x00742e40
007412B1  83 C4 04                  ADD ESP,0x4
LAB_007412b4:
007412B4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007412B7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007412BA  8B 01                     MOV EAX,dword ptr [ECX]
007412BC  3B 42 08                  CMP EAX,dword ptr [EDX + 0x8]
007412BF  75 1E                     JNZ 0x007412df
007412C1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007412C4  83 79 04 00               CMP dword ptr [ECX + 0x4],0x0
007412C8  74 08                     JZ 0x007412d2
007412CA  83 C8 FF                  OR EAX,0xffffffff
007412CD  E9 95 00 00 00            JMP 0x00741367
LAB_007412d2:
007412D2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007412D5  8B 02                     MOV EAX,dword ptr [EDX]
007412D7  83 C0 01                  ADD EAX,0x1
007412DA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007412DD  89 01                     MOV dword ptr [ECX],EAX
LAB_007412df:
007412DF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007412E2  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
007412E5  83 E0 40                  AND EAX,0x40
007412E8  85 C0                     TEST EAX,EAX
007412EA  74 31                     JZ 0x0074131d
007412EC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007412EF  8B 11                     MOV EDX,dword ptr [ECX]
007412F1  83 EA 01                  SUB EDX,0x1
007412F4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007412F7  89 10                     MOV dword ptr [EAX],EDX
007412F9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007412FC  8B 11                     MOV EDX,dword ptr [ECX]
007412FE  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00741301  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
00741305  3B C1                     CMP EAX,ECX
00741307  74 12                     JZ 0x0074131b
00741309  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074130C  8B 02                     MOV EAX,dword ptr [EDX]
0074130E  83 C0 01                  ADD EAX,0x1
00741311  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00741314  89 01                     MOV dword ptr [ECX],EAX
00741316  83 C8 FF                  OR EAX,0xffffffff
00741319  EB 4C                     JMP 0x00741367
LAB_0074131b:
0074131B  EB 17                     JMP 0x00741334
LAB_0074131d:
0074131D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00741320  8B 02                     MOV EAX,dword ptr [EDX]
00741322  83 E8 01                  SUB EAX,0x1
00741325  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00741328  89 01                     MOV dword ptr [ECX],EAX
0074132A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074132D  8B 02                     MOV EAX,dword ptr [EDX]
0074132F  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
00741332  88 08                     MOV byte ptr [EAX],CL
LAB_00741334:
00741334  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00741337  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0074133A  83 C0 01                  ADD EAX,0x1
0074133D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00741340  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00741343  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00741346  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00741349  24 EF                     AND AL,0xef
0074134B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074134E  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
00741351  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00741354  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00741357  0C 01                     OR AL,0x1
00741359  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074135C  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0074135F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00741362  25 FF 00 00 00            AND EAX,0xff
LAB_00741367:
00741367  5F                        POP EDI
00741368  5E                        POP ESI
00741369  5B                        POP EBX
0074136A  8B E5                     MOV ESP,EBP
0074136C  5D                        POP EBP
0074136D  C3                        RET
