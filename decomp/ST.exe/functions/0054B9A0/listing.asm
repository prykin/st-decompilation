FUN_0054b9a0:
0054B9A0  55                        PUSH EBP
0054B9A1  8B EC                     MOV EBP,ESP
0054B9A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054B9A6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0054B9A9  53                        PUSH EBX
0054B9AA  56                        PUSH ESI
0054B9AB  8B F1                     MOV ESI,ECX
0054B9AD  57                        PUSH EDI
0054B9AE  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0054B9B1  8D 48 0B                  LEA ECX,[EAX + 0xb]
0054B9B4  8D 44 10 F4               LEA EAX,[EAX + EDX*0x1 + -0xc]
0054B9B8  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0054B9BB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0054B9BE  8D 50 05                  LEA EDX,[EAX + 0x5]
0054B9C1  8D 5C 38 FA               LEA EBX,[EAX + EDI*0x1 + -0x6]
0054B9C5  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0054B9C8  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
0054B9CB  3B C1                     CMP EAX,ECX
0054B9CD  7E 4D                     JLE 0x0054ba1c
0054B9CF  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
0054B9D2  7D 48                     JGE 0x0054ba1c
0054B9D4  3B FA                     CMP EDI,EDX
0054B9D6  7E 44                     JLE 0x0054ba1c
0054B9D8  3B FB                     CMP EDI,EBX
0054B9DA  7D 40                     JGE 0x0054ba1c
0054B9DC  8B 86 96 04 00 00         MOV EAX,dword ptr [ESI + 0x496]
0054B9E2  85 C0                     TEST EAX,EAX
0054B9E4  74 15                     JZ 0x0054b9fb
0054B9E6  8A 86 DE 00 00 00         MOV AL,byte ptr [ESI + 0xde]
0054B9EC  84 C0                     TEST AL,AL
0054B9EE  74 1C                     JZ 0x0054ba0c
0054B9F0  8B CE                     MOV ECX,ESI
0054B9F2  E8 90 9C EB FF            CALL 0x00405687
0054B9F7  85 C0                     TEST EAX,EAX
0054B9F9  75 11                     JNZ 0x0054ba0c
LAB_0054b9fb:
0054B9FB  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0054B9FE  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0054BA01  51                        PUSH ECX
0054BA02  52                        PUSH EDX
0054BA03  6A 00                     PUSH 0x0
0054BA05  8B CE                     MOV ECX,ESI
0054BA07  E8 72 96 EB FF            CALL 0x0040507e
FUN_0054b9a0::cf_common_exit_0054BA0C:
0054BA0C  C6 86 D1 00 00 00 01      MOV byte ptr [ESI + 0xd1],0x1
0054BA13  5F                        POP EDI
0054BA14  5E                        POP ESI
0054BA15  33 C0                     XOR EAX,EAX
0054BA17  5B                        POP EBX
0054BA18  5D                        POP EBP
0054BA19  C2 1C 00                  RET 0x1c
LAB_0054ba1c:
0054BA1C  83 3D 84 87 80 00 00      CMP dword ptr [0x00808784],0x0
0054BA23  75 E7                     JNZ 0x0054ba0c
0054BA25  83 3D 88 87 80 00 00      CMP dword ptr [0x00808788],0x0
0054BA2C  75 DE                     JNZ 0x0054ba0c
0054BA2E  83 3D 8C 87 80 00 00      CMP dword ptr [0x0080878c],0x0
0054BA35  75 D5                     JNZ 0x0054ba0c
0054BA37  83 3D 90 87 80 00 00      CMP dword ptr [0x00808790],0x0
0054BA3E  75 CC                     JNZ 0x0054ba0c
0054BA40  3B C1                     CMP EAX,ECX
0054BA42  0F 8F A8 00 00 00         JG 0x0054baf0
0054BA48  3B FA                     CMP EDI,EDX
0054BA4A  7F 50                     JG 0x0054ba9c
0054BA4C  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0054BA52  33 C0                     XOR EAX,EAX
0054BA54  8A 86 D1 00 00 00         MOV AL,byte ptr [ESI + 0xd1]
0054BA5A  6A 00                     PUSH 0x0
0054BA5C  50                        PUSH EAX
0054BA5D  6A 01                     PUSH 0x1
0054BA5F  6A 05                     PUSH 0x5
0054BA61  E8 7E 5D EB FF            CALL 0x004017e4
0054BA66  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0054BA69  85 C9                     TEST ECX,ECX
0054BA6B  74 1C                     JZ 0x0054ba89
0054BA6D  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0054BA70  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0054BA73  83 E8 FE                  SUB EAX,-0x2
0054BA76  51                        PUSH ECX
0054BA77  F7 D8                     NEG EAX
0054BA79  1B C0                     SBB EAX,EAX
0054BA7B  52                        PUSH EDX
0054BA7C  24 F6                     AND AL,0xf6
0054BA7E  8B CE                     MOV ECX,ESI
0054BA80  83 C0 40                  ADD EAX,0x40
0054BA83  50                        PUSH EAX
0054BA84  E8 F5 95 EB FF            CALL 0x0040507e
LAB_0054ba89:
0054BA89  C6 86 D1 00 00 00 00      MOV byte ptr [ESI + 0xd1],0x0
0054BA90  5F                        POP EDI
0054BA91  5E                        POP ESI
0054BA92  B8 01 00 00 00            MOV EAX,0x1
0054BA97  5B                        POP EBX
0054BA98  5D                        POP EBP
0054BA99  C2 1C 00                  RET 0x1c
LAB_0054ba9c:
0054BA9C  3B FB                     CMP EDI,EBX
0054BA9E  7C 50                     JL 0x0054baf0
0054BAA0  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0054BAA6  33 C0                     XOR EAX,EAX
0054BAA8  8A 86 D1 00 00 00         MOV AL,byte ptr [ESI + 0xd1]
0054BAAE  6A 00                     PUSH 0x0
0054BAB0  50                        PUSH EAX
0054BAB1  6A 01                     PUSH 0x1
0054BAB3  6A 06                     PUSH 0x6
0054BAB5  E8 2A 5D EB FF            CALL 0x004017e4
0054BABA  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0054BABD  85 C9                     TEST ECX,ECX
0054BABF  74 1C                     JZ 0x0054badd
0054BAC1  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0054BAC4  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0054BAC7  83 E8 FE                  SUB EAX,-0x2
0054BACA  51                        PUSH ECX
0054BACB  F7 D8                     NEG EAX
0054BACD  1B C0                     SBB EAX,EAX
0054BACF  52                        PUSH EDX
0054BAD0  24 F6                     AND AL,0xf6
0054BAD2  8B CE                     MOV ECX,ESI
0054BAD4  83 C0 42                  ADD EAX,0x42
0054BAD7  50                        PUSH EAX
0054BAD8  E8 A1 95 EB FF            CALL 0x0040507e
LAB_0054badd:
0054BADD  C6 86 D1 00 00 00 00      MOV byte ptr [ESI + 0xd1],0x0
0054BAE4  5F                        POP EDI
0054BAE5  5E                        POP ESI
0054BAE6  B8 01 00 00 00            MOV EAX,0x1
0054BAEB  5B                        POP EBX
0054BAEC  5D                        POP EBP
0054BAED  C2 1C 00                  RET 0x1c
LAB_0054baf0:
0054BAF0  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
0054BAF3  0F 8C A8 00 00 00         JL 0x0054bba1
0054BAF9  3B FA                     CMP EDI,EDX
0054BAFB  7F 50                     JG 0x0054bb4d
0054BAFD  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0054BB03  33 C0                     XOR EAX,EAX
0054BB05  8A 86 D1 00 00 00         MOV AL,byte ptr [ESI + 0xd1]
0054BB0B  6A 00                     PUSH 0x0
0054BB0D  50                        PUSH EAX
0054BB0E  6A 01                     PUSH 0x1
0054BB10  6A 07                     PUSH 0x7
0054BB12  E8 CD 5C EB FF            CALL 0x004017e4
0054BB17  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0054BB1A  85 C9                     TEST ECX,ECX
0054BB1C  74 1C                     JZ 0x0054bb3a
0054BB1E  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0054BB21  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0054BB24  83 E8 FE                  SUB EAX,-0x2
0054BB27  51                        PUSH ECX
0054BB28  F7 D8                     NEG EAX
0054BB2A  1B C0                     SBB EAX,EAX
0054BB2C  52                        PUSH EDX
0054BB2D  24 F6                     AND AL,0xf6
0054BB2F  8B CE                     MOV ECX,ESI
0054BB31  83 C0 41                  ADD EAX,0x41
0054BB34  50                        PUSH EAX
0054BB35  E8 44 95 EB FF            CALL 0x0040507e
LAB_0054bb3a:
0054BB3A  C6 86 D1 00 00 00 00      MOV byte ptr [ESI + 0xd1],0x0
0054BB41  5F                        POP EDI
0054BB42  5E                        POP ESI
0054BB43  B8 01 00 00 00            MOV EAX,0x1
0054BB48  5B                        POP EBX
0054BB49  5D                        POP EBP
0054BB4A  C2 1C 00                  RET 0x1c
LAB_0054bb4d:
0054BB4D  3B FB                     CMP EDI,EBX
0054BB4F  7C 50                     JL 0x0054bba1
0054BB51  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0054BB57  33 C0                     XOR EAX,EAX
0054BB59  8A 86 D1 00 00 00         MOV AL,byte ptr [ESI + 0xd1]
0054BB5F  6A 00                     PUSH 0x0
0054BB61  50                        PUSH EAX
0054BB62  6A 01                     PUSH 0x1
0054BB64  6A 08                     PUSH 0x8
0054BB66  E8 79 5C EB FF            CALL 0x004017e4
0054BB6B  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0054BB6E  85 C9                     TEST ECX,ECX
0054BB70  74 1C                     JZ 0x0054bb8e
0054BB72  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0054BB75  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0054BB78  83 E8 FE                  SUB EAX,-0x2
0054BB7B  51                        PUSH ECX
0054BB7C  F7 D8                     NEG EAX
0054BB7E  1B C0                     SBB EAX,EAX
0054BB80  52                        PUSH EDX
0054BB81  24 F6                     AND AL,0xf6
0054BB83  8B CE                     MOV ECX,ESI
0054BB85  83 C0 43                  ADD EAX,0x43
0054BB88  50                        PUSH EAX
0054BB89  E8 F0 94 EB FF            CALL 0x0040507e
LAB_0054bb8e:
0054BB8E  C6 86 D1 00 00 00 00      MOV byte ptr [ESI + 0xd1],0x0
0054BB95  5F                        POP EDI
0054BB96  5E                        POP ESI
0054BB97  B8 01 00 00 00            MOV EAX,0x1
0054BB9C  5B                        POP EBX
0054BB9D  5D                        POP EBP
0054BB9E  C2 1C 00                  RET 0x1c
LAB_0054bba1:
0054BBA1  3B C1                     CMP EAX,ECX
0054BBA3  7F 50                     JG 0x0054bbf5
0054BBA5  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0054BBAB  33 C0                     XOR EAX,EAX
0054BBAD  8A 86 D1 00 00 00         MOV AL,byte ptr [ESI + 0xd1]
0054BBB3  6A 00                     PUSH 0x0
0054BBB5  50                        PUSH EAX
0054BBB6  6A 01                     PUSH 0x1
0054BBB8  6A 01                     PUSH 0x1
0054BBBA  E8 25 5C EB FF            CALL 0x004017e4
0054BBBF  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0054BBC2  85 C9                     TEST ECX,ECX
0054BBC4  74 1C                     JZ 0x0054bbe2
0054BBC6  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0054BBC9  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0054BBCC  83 E8 FE                  SUB EAX,-0x2
0054BBCF  51                        PUSH ECX
0054BBD0  F7 D8                     NEG EAX
0054BBD2  1B C0                     SBB EAX,EAX
0054BBD4  52                        PUSH EDX
0054BBD5  24 F6                     AND AL,0xf6
0054BBD7  8B CE                     MOV ECX,ESI
0054BBD9  83 C0 3F                  ADD EAX,0x3f
0054BBDC  50                        PUSH EAX
0054BBDD  E8 9C 94 EB FF            CALL 0x0040507e
LAB_0054bbe2:
0054BBE2  C6 86 D1 00 00 00 00      MOV byte ptr [ESI + 0xd1],0x0
0054BBE9  5F                        POP EDI
0054BBEA  5E                        POP ESI
0054BBEB  B8 01 00 00 00            MOV EAX,0x1
0054BBF0  5B                        POP EBX
0054BBF1  5D                        POP EBP
0054BBF2  C2 1C 00                  RET 0x1c
LAB_0054bbf5:
0054BBF5  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
0054BBF8  7C 50                     JL 0x0054bc4a
0054BBFA  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0054BC00  33 C0                     XOR EAX,EAX
0054BC02  8A 86 D1 00 00 00         MOV AL,byte ptr [ESI + 0xd1]
0054BC08  6A 00                     PUSH 0x0
0054BC0A  50                        PUSH EAX
0054BC0B  6A 01                     PUSH 0x1
0054BC0D  6A 02                     PUSH 0x2
0054BC0F  E8 D0 5B EB FF            CALL 0x004017e4
0054BC14  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0054BC17  85 C9                     TEST ECX,ECX
0054BC19  74 1C                     JZ 0x0054bc37
0054BC1B  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0054BC1E  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0054BC21  83 E8 FE                  SUB EAX,-0x2
0054BC24  51                        PUSH ECX
0054BC25  F7 D8                     NEG EAX
0054BC27  1B C0                     SBB EAX,EAX
0054BC29  52                        PUSH EDX
0054BC2A  24 F6                     AND AL,0xf6
0054BC2C  8B CE                     MOV ECX,ESI
0054BC2E  83 C0 3E                  ADD EAX,0x3e
0054BC31  50                        PUSH EAX
0054BC32  E8 47 94 EB FF            CALL 0x0040507e
LAB_0054bc37:
0054BC37  C6 86 D1 00 00 00 00      MOV byte ptr [ESI + 0xd1],0x0
0054BC3E  5F                        POP EDI
0054BC3F  5E                        POP ESI
0054BC40  B8 01 00 00 00            MOV EAX,0x1
0054BC45  5B                        POP EBX
0054BC46  5D                        POP EBP
0054BC47  C2 1C 00                  RET 0x1c
LAB_0054bc4a:
0054BC4A  3B FA                     CMP EDI,EDX
0054BC4C  7F 50                     JG 0x0054bc9e
0054BC4E  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0054BC54  33 C0                     XOR EAX,EAX
0054BC56  8A 86 D1 00 00 00         MOV AL,byte ptr [ESI + 0xd1]
0054BC5C  6A 00                     PUSH 0x0
0054BC5E  50                        PUSH EAX
0054BC5F  6A 01                     PUSH 0x1
0054BC61  6A 03                     PUSH 0x3
0054BC63  E8 7C 5B EB FF            CALL 0x004017e4
0054BC68  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0054BC6B  85 C9                     TEST ECX,ECX
0054BC6D  74 1C                     JZ 0x0054bc8b
0054BC6F  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0054BC72  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0054BC75  83 E8 FE                  SUB EAX,-0x2
0054BC78  51                        PUSH ECX
0054BC79  F7 D8                     NEG EAX
0054BC7B  1B C0                     SBB EAX,EAX
0054BC7D  52                        PUSH EDX
0054BC7E  24 F6                     AND AL,0xf6
0054BC80  8B CE                     MOV ECX,ESI
0054BC82  83 C0 3C                  ADD EAX,0x3c
0054BC85  50                        PUSH EAX
0054BC86  E8 F3 93 EB FF            CALL 0x0040507e
LAB_0054bc8b:
0054BC8B  C6 86 D1 00 00 00 00      MOV byte ptr [ESI + 0xd1],0x0
0054BC92  5F                        POP EDI
0054BC93  5E                        POP ESI
0054BC94  B8 01 00 00 00            MOV EAX,0x1
0054BC99  5B                        POP EBX
0054BC9A  5D                        POP EBP
0054BC9B  C2 1C 00                  RET 0x1c
LAB_0054bc9e:
0054BC9E  3B FB                     CMP EDI,EBX
0054BCA0  7C 50                     JL 0x0054bcf2
0054BCA2  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0054BCA8  33 C0                     XOR EAX,EAX
0054BCAA  8A 86 D1 00 00 00         MOV AL,byte ptr [ESI + 0xd1]
0054BCB0  6A 00                     PUSH 0x0
0054BCB2  50                        PUSH EAX
0054BCB3  6A 01                     PUSH 0x1
0054BCB5  6A 04                     PUSH 0x4
0054BCB7  E8 28 5B EB FF            CALL 0x004017e4
0054BCBC  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0054BCBF  85 C9                     TEST ECX,ECX
0054BCC1  74 1C                     JZ 0x0054bcdf
0054BCC3  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0054BCC6  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0054BCC9  83 E8 FE                  SUB EAX,-0x2
0054BCCC  51                        PUSH ECX
0054BCCD  F7 D8                     NEG EAX
0054BCCF  1B C0                     SBB EAX,EAX
0054BCD1  52                        PUSH EDX
0054BCD2  24 F6                     AND AL,0xf6
0054BCD4  8B CE                     MOV ECX,ESI
0054BCD6  83 C0 3D                  ADD EAX,0x3d
0054BCD9  50                        PUSH EAX
0054BCDA  E8 9F 93 EB FF            CALL 0x0040507e
LAB_0054bcdf:
0054BCDF  C6 86 D1 00 00 00 00      MOV byte ptr [ESI + 0xd1],0x0
0054BCE6  5F                        POP EDI
0054BCE7  5E                        POP ESI
0054BCE8  B8 01 00 00 00            MOV EAX,0x1
0054BCED  5B                        POP EBX
0054BCEE  5D                        POP EBP
0054BCEF  C2 1C 00                  RET 0x1c
LAB_0054bcf2:
0054BCF2  C6 86 D1 00 00 00 01      MOV byte ptr [ESI + 0xd1],0x1
0054BCF9  5F                        POP EDI
0054BCFA  5E                        POP ESI
0054BCFB  B8 01 00 00 00            MOV EAX,0x1
0054BD00  5B                        POP EBX
0054BD01  5D                        POP EBP
0054BD02  C2 1C 00                  RET 0x1c
