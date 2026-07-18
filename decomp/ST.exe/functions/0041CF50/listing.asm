FUN_0041cf50:
0041CF50  56                        PUSH ESI
0041CF51  8B F1                     MOV ESI,ECX
0041CF53  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041CF59  85 C9                     TEST ECX,ECX
0041CF5B  74 25                     JZ 0x0041cf82
0041CF5D  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0041CF60  8B 96 05 01 00 00         MOV EDX,dword ptr [ESI + 0x105]
0041CF66  6A FF                     PUSH -0x1
0041CF68  50                        PUSH EAX
0041CF69  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041CF6C  52                        PUSH EDX
0041CF6D  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
0041CF71  50                        PUSH EAX
0041CF72  52                        PUSH EDX
0041CF73  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
0041CF77  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041CF7B  50                        PUSH EAX
0041CF7C  52                        PUSH EDX
0041CF7D  E8 96 50 FE FF            CALL 0x00402018
LAB_0041cf82:
0041CF82  8B 06                     MOV EAX,dword ptr [ESI]
0041CF84  8B CE                     MOV ECX,ESI
0041CF86  FF 50 08                  CALL dword ptr [EAX + 0x8]
0041CF89  83 F8 01                  CMP EAX,0x1
0041CF8C  75 32                     JNZ 0x0041cfc0
0041CF8E  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041CF91  33 C9                     XOR ECX,ECX
0041CF93  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0041CF99  3B C1                     CMP EAX,ECX
0041CF9B  75 23                     JNZ 0x0041cfc0
0041CF9D  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041CFA0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0041CFA6  C1 EA 10                  SHR EDX,0x10
0041CFA9  81 E2 FF 00 00 00         AND EDX,0xff
0041CFAF  33 C0                     XOR EAX,EAX
0041CFB1  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0041CFB5  C1 E2 10                  SHL EDX,0x10
0041CFB8  0B D0                     OR EDX,EAX
0041CFBA  52                        PUSH EDX
0041CFBB  E8 C0 97 2C 00            CALL 0x006e6780
LAB_0041cfc0:
0041CFC0  C7 86 05 01 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x105],0xffffffff
0041CFCA  5E                        POP ESI
0041CFCB  C2 04 00                  RET 0x4
