FUN_00751f90:
00751F90  55                        PUSH EBP
00751F91  8B EC                     MOV EBP,ESP
00751F93  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00751F96  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00751F99  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00751F9C  50                        PUSH EAX
00751F9D  8B 42 26                  MOV EAX,dword ptr [EDX + 0x26]
00751FA0  51                        PUSH ECX
00751FA1  50                        PUSH EAX
00751FA2  FF 15 00 BD 85 00         CALL dword ptr [0x0085bd00]
00751FA8  83 F8 FF                  CMP EAX,-0x1
00751FAB  75 05                     JNZ 0x00751fb2
00751FAD  B8 F4 FF FF FF            MOV EAX,0xfffffff4
LAB_00751fb2:
00751FB2  5D                        POP EBP
00751FB3  C2 0C 00                  RET 0xc
