FUN_00614bf0:
00614BF0  56                        PUSH ESI
00614BF1  8B F1                     MOV ESI,ECX
00614BF3  8B 8E DD 02 00 00         MOV ECX,dword ptr [ESI + 0x2dd]
00614BF9  8D 86 DD 02 00 00         LEA EAX,[ESI + 0x2dd]
00614BFF  85 C9                     TEST ECX,ECX
00614C01  74 06                     JZ 0x00614c09
00614C03  50                        PUSH EAX
00614C04  E8 57 64 09 00            CALL 0x006ab060
LAB_00614c09:
00614C09  8B 8E E5 02 00 00         MOV ECX,dword ptr [ESI + 0x2e5]
00614C0F  8D 86 E5 02 00 00         LEA EAX,[ESI + 0x2e5]
00614C15  85 C9                     TEST ECX,ECX
00614C17  74 06                     JZ 0x00614c1f
00614C19  50                        PUSH EAX
00614C1A  E8 41 64 09 00            CALL 0x006ab060
LAB_00614c1f:
00614C1F  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00614C25  C7 86 D5 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2d5],0x0
00614C2F  85 C9                     TEST ECX,ECX
00614C31  74 1E                     JZ 0x00614c51
00614C33  E8 9D D5 DE FF            CALL 0x004021d5
00614C38  8B 86 52 02 00 00         MOV EAX,dword ptr [ESI + 0x252]
00614C3E  50                        PUSH EAX
00614C3F  E8 6C 96 11 00            CALL 0x0072e2b0
00614C44  83 C4 04                  ADD ESP,0x4
00614C47  C7 86 52 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x252],0x0
LAB_00614c51:
00614C51  5E                        POP ESI
00614C52  C3                        RET
