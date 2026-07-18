FUN_00711260:
00711260  55                        PUSH EBP
00711261  8B EC                     MOV EBP,ESP
00711263  51                        PUSH ECX
00711264  53                        PUSH EBX
00711265  56                        PUSH ESI
00711266  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00711269  57                        PUSH EDI
0071126A  33 FF                     XOR EDI,EDI
0071126C  8B D9                     MOV EBX,ECX
0071126E  3B F7                     CMP ESI,EDI
00711270  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00711273  75 0B                     JNZ 0x00711280
00711275  5F                        POP EDI
00711276  5E                        POP ESI
00711277  33 C0                     XOR EAX,EAX
00711279  5B                        POP EBX
0071127A  8B E5                     MOV ESP,EBP
0071127C  5D                        POP EBP
0071127D  C2 04 00                  RET 0x4
LAB_00711280:
00711280  80 3E 00                  CMP byte ptr [ESI],0x0
00711283  74 1E                     JZ 0x007112a3
LAB_00711285:
00711285  85 FF                     TEST EDI,EDI
00711287  74 26                     JZ 0x007112af
00711289  56                        PUSH ESI
0071128A  33 FF                     XOR EDI,EDI
0071128C  E8 2F BB FF FF            CALL 0x0070cdc0
00711291  83 C4 04                  ADD ESP,0x4
00711294  85 C0                     TEST EAX,EAX
00711296  7D 03                     JGE 0x0071129b
LAB_00711298:
00711298  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_0071129b:
0071129B  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0071129E  46                        INC ESI
0071129F  84 C0                     TEST AL,AL
007112A1  75 E2                     JNZ 0x00711285
LAB_007112a3:
007112A3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007112A6  5F                        POP EDI
007112A7  5E                        POP ESI
007112A8  5B                        POP EBX
007112A9  8B E5                     MOV ESP,EBP
007112AB  5D                        POP EBP
007112AC  C2 04 00                  RET 0x4
LAB_007112af:
007112AF  8D 83 9E 00 00 00         LEA EAX,[EBX + 0x9e]
007112B5  56                        PUSH ESI
007112B6  50                        PUSH EAX
007112B7  E8 D4 BA FF FF            CALL 0x0070cd90
007112BC  83 C4 08                  ADD ESP,0x8
007112BF  85 C0                     TEST EAX,EAX
007112C1  75 D5                     JNZ 0x00711298
007112C3  8B 43 7E                  MOV EAX,dword ptr [EBX + 0x7e]
007112C6  85 C0                     TEST EAX,EAX
007112C8  74 CE                     JZ 0x00711298
007112CA  BF 01 00 00 00            MOV EDI,0x1
007112CF  EB CA                     JMP 0x0071129b
