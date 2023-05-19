import React, {useState} from 'react';
import {View, Text, TextInput, StyleSheet, Button, Alert} from 'react-native';
import {Picker} from '@react-native-picker/picker';
import api from '../Services/Api';

export default function Login () {
  const [Login, setUser] = useState('');
  const [Senha, setSenha] = useState('');
  

  function login(){
   api.post ('/usuario_teste', dados,
   {headers:{'Content-Type': 'multipart/form-data'},})

}
  
  
  function criar(){
  
  
    api.post('/usuario_teste', dados,
        {headers:{'Content-Type': 'multipart/form-data'},})
    .then(function(response){
      Alert.alert('Dados salvos com sucesso')
      if(response.data.data =='true'){
        //encaminhar ele para Home
} else{
    Alert.alert ('Usuário ou senha inválido');

} 
    })
    .catch(function(error) {
      Alert.alert('ERRO');
      console.log(error.response.data);
         })

  }


return (
<View style={styles.container}>
  <TextInput
     style={styles.input}
     placeholder="User"
     autoCorrect={false}
     autoCapitalize={false}
     value={Login}
     onChangeText={(text)=>setUser (text)}
/>
  <TextInput
  style={styles.input}
  placeholder="Senha"
  autoCorrect={false}
  autoCapitalize={false}
  value={Senha}
  onChangeText={(text)=>setSenha (text)}
  secureTextEntry={true}
/>


<Button  title="Login" onPress={()=>login()} />
<Button title="Criar User" onPress={()=>criar()} />

  </View>
);
}
const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems:'center',
    justifyContent:'center',
    backgroundColor:'#000000'
},
input:{
  background: '#80007',
  alignSelf:"center",
  width:'80%',
  height:50,
  marginTop:10,
  marginBottom:20,
  fontSize: 20,
  borderWidth:1,
  borderRadius:7,
}
})