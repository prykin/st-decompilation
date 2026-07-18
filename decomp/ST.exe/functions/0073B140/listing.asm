FUN_0073b140:
0073B140  55                        PUSH EBP
0073B141  8B EC                     MOV EBP,ESP
0073B143  81 EC 98 00 00 00         SUB ESP,0x98
0073B149  C7 85 6C FF FF FF 94 00 00 00  MOV dword ptr [EBP + 0xffffff6c],0x94
0073B153  8D 85 6C FF FF FF         LEA EAX,[EBP + 0xffffff6c]
0073B159  50                        PUSH EAX
0073B15A  FF 15 1C BC 85 00         CALL dword ptr [0x0085bc1c]
0073B160  85 C0                     TEST EAX,EAX
0073B162  74 15                     JZ 0x0073b179
0073B164  83 BD 7C FF FF FF 02      CMP dword ptr [EBP + 0xffffff7c],0x2
0073B16B  75 0C                     JNZ 0x0073b179
0073B16D  C7 85 68 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff68],0x1
0073B177  EB 0A                     JMP 0x0073b183
LAB_0073b179:
0073B179  C7 85 68 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff68],0x0
LAB_0073b183:
0073B183  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
0073B189  8B E5                     MOV ESP,EBP
0073B18B  5D                        POP EBP
0073B18C  C3                        RET
