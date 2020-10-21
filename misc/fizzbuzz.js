function fizzbuzz(){
	for(let i = 1; i <= 100; i++){
		let word = '';
		if((i%3==0) || (i%5==0)){
			if(i%3==0){word = word + 'Fizz'}
			if(i%5==0){word = word + 'Buzz'}
		}
		else {word = i}

		console.log(word);
	}
}

fizzbuzz();
