FUN_0054b630:
0054B630  55                        PUSH EBP
0054B631  8B EC                     MOV EBP,ESP
0054B633  56                        PUSH ESI
0054B634  8B F1                     MOV ESI,ECX
0054B636  E8 C1 8A EB FF            CALL 0x004040fc
0054B63B  8B CE                     MOV ECX,ESI
0054B63D  E8 16 7A EB FF            CALL 0x00403058
0054B642  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054B645  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0054B648  89 86 A2 04 00 00         MOV dword ptr [ESI + 0x4a2],EAX
0054B64E  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
0054B654  89 8E AA 04 00 00         MOV dword ptr [ESI + 0x4aa],ECX
0054B65A  8B 8E B2 04 00 00         MOV ECX,dword ptr [ESI + 0x4b2]
0054B660  3B C1                     CMP EAX,ECX
0054B662  7C 38                     JL 0x0054b69c
0054B664  8B 96 BA 04 00 00         MOV EDX,dword ptr [ESI + 0x4ba]
0054B66A  03 D1                     ADD EDX,ECX
0054B66C  3B C2                     CMP EAX,EDX
0054B66E  7D 2C                     JGE 0x0054b69c
0054B670  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
0054B676  8B 8E B6 04 00 00         MOV ECX,dword ptr [ESI + 0x4b6]
0054B67C  3B C1                     CMP EAX,ECX
0054B67E  7C 1C                     JL 0x0054b69c
0054B680  8B 96 BE 04 00 00         MOV EDX,dword ptr [ESI + 0x4be]
0054B686  03 D1                     ADD EDX,ECX
0054B688  3B C2                     CMP EAX,EDX
0054B68A  7D 10                     JGE 0x0054b69c
0054B68C  B8 01 00 00 00            MOV EAX,0x1
0054B691  89 86 96 04 00 00         MOV dword ptr [ESI + 0x496],EAX
0054B697  5E                        POP ESI
0054B698  5D                        POP EBP
0054B699  C2 08 00                  RET 0x8
LAB_0054b69c:
0054B69C  33 C0                     XOR EAX,EAX
0054B69E  89 86 96 04 00 00         MOV dword ptr [ESI + 0x496],EAX
0054B6A4  5E                        POP ESI
0054B6A5  5D                        POP EBP
0054B6A6  C2 08 00                  RET 0x8
